#include <iostream>

class Persona
{
    std::string nombre;
    int edad;
public:
    void SetNombre(const std::string& nombre);
    const std::string& GetNombre();
    void SetEdad(int edad);
    int GetEdad();
};

class Rectangulo
{
    float x;
    float y;
    float w;
    float h;
public:
    Rectangulo(float x, float y, float width, float height);
    float CalcularArea() const;
    float CalcularPerimetro() const;
};

class Triangulo
{};

class Circulo
{};