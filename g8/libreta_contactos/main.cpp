#include "contactos.h"

using namespace ULContactos;

int main()
{
    LibretaContactosJSON libreta;
    libreta.AgregarContacto(
        "Arturo", 20, "999888777", "arturo@gmail.com", Sexo::Masculino
    );
    libreta.AgregarContacto(
        "Pepito", 18, "977333222", "pepito@gmail.com", Sexo::Masculino
    );
    libreta.AgregarContacto(
        "Julia", 18, "999666546", "julia@gmail.com", Sexo::Femenino
    );

    libreta.ImprimirDatos();
    libreta.FiltrarContactosPorSexo(Sexo::Femenino);


    Contacto* contactoEncontrado = libreta.BuscarPorNombre("Julia");
    if (contactoEncontrado == nullptr)
    {
        std::cerr << "No se encontro contacto" << '\n';
        return 123;
    }
    std::cout << "Contacto encontrado:" << contactoEncontrado->email << '\n';

    libreta.EliminarPorNombre("Pepito");

    libreta.ImprimirDatos();

    Contacto* contacto = libreta.BuscarPorNombre("Arturo");
    if (contacto == nullptr)
    {
        std::cerr << "No se encontro contacto" << '\n';
        return 123;
    }
    libreta.ModificarContacto(
        *contacto, 
        contacto->nombre, 
        22, 
        contacto->telefono, 
        contacto->email
    );

    libreta.ImprimirDatos();


    return 0;
}