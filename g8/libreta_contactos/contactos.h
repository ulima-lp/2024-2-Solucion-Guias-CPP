#include<iostream>
#include<vector>
#include<string>

enum class Sexo
{
    Masculino, Femenino
};

class Contacto
{
public:
    std::string nombre;
    int edad;
    std::string telefono;
    std::string email;
    Sexo sexo;

    Contacto(
        std::string nombre, int edad, 
        std::string telefono, std::string email,
        Sexo sexo);
};

class LibretaContactos
{
protected:
    std::vector<Contacto>* contactos;
public:
    LibretaContactos();
    void AgregarContacto(
        std::string nombre, int edad, 
        std::string telefono, std::string email,
        Sexo sexo);
    virtual void ImprimirDatos() = 0;
};

class LibretaContactosXML : public LibretaContactos
{
public:
    void ImprimirDatos() override;
};

class LibretaContactosJSON : public LibretaContactos
{
public:
    void ImprimirDatos() override;
};