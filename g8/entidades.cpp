#include "entidades.h"

void Persona::SetNombre(const std::string& nombre)
{
    this->nombre = nombre;
}

const std::string& Persona::GetNombre()
{
    return this->nombre;
}

void Persona::SetEdad(int edad)
{
    this->edad = edad;
}

int Persona::GetEdad()
{
    return edad;
}

Rectangulo::Rectangulo(float x, float y, float width, float height)
{
    this->x = x;
    this->y = y;
    this->w = width;
    this->h = height;
}

float Rectangulo::CalcularArea() const
{
    return w * h;
}

float Rectangulo::CalcularPerimetro() const
{
    return 2 * (w + h);
}
