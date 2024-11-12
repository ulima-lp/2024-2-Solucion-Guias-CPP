#include "contactos.h"

namespace ULContactos
{
    // ========================= Contacto ==============================

    Contacto::Contacto(
            std::string nombre, int edad, 
            std::string telefono, std::string email,
            Sexo sexo) 
        : nombre(nombre), edad(edad), telefono(telefono), email(email), sexo(sexo)
    {}

    // ========================= LibretaContactos ========================

    LibretaContactos::LibretaContactos()
    {
        contactos = new std::vector<Contacto>();
    }

    void LibretaContactos::AgregarContacto(
        std::string nombre, int edad, std::string telefono, std::string email, Sexo sexo)
    {
        Contacto contacto(nombre, edad, telefono, email, sexo);
        //auto contacto = Contacto{nombre, edad, telefono, email, sexo};

        contactos->push_back(contacto);
    }

    void LibretaContactosXML::ImprimirDatos()
    {
        std::cout << "<contactos>" << '\n';
        for (const auto& contacto : *contactos)
        {
            std::cout << "<contacto nombre='" << contacto.nombre << "' "
                << "edad='" << contacto.edad 
                << "' telefono='" << contacto.telefono << "' "
                << "email='" << contacto.email 
                <<  "' sexo='" << (int)contacto.sexo << "' />" << '\n';
        }
        std::cout << "</contactos>" << '\n';
    }


    /*
    {
        'nombre' : 'Pepito',
        'edad' : 20,
        'telefono' : '34653453453',
        'email' : 'fds@sfds.com',
        'sexo' : 0
    }
    */
    void LibretaContactosJSON::ImprimirDatos()
    {
        std::cout << "[" << '\n';
        for (const auto& contacto : *contactos)
        {
            std::cout << "\t{" << '\n';
            std::cout << "\t\t'nombre' : '" << contacto.nombre << "'," << '\n'
                      << "\t\t'edad' : " << contacto.edad << "," << '\n'
                      << "\t\t'telefono' : '" << contacto.telefono << "'," << '\n'
                      << "\t\t'email' : '" << contacto.email << "'," << '\n'
                      << "\t\t'sexo' : " << (int)contacto.sexo << '\n';
            std::cout << "\t}" << '\n';
        }
        std::cout << "]" << '\n';
    }
}

