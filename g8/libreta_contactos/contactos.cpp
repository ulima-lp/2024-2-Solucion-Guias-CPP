#include "contactos.h"

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