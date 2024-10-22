#include "entidades.h"
#include <iostream>

int main()
{
    Persona p;
    std::string nombre = "Arturo";
    p.SetNombre(nombre);
    const std::string& nom = p.GetNombre();
    //nom = "Pepito";
    std::cout << p.GetNombre() << '\n';

    Rectangulo r(10, 10, 20, 30);
    std::cout << "Area: " << r.CalcularArea() << '\n';
    std::cout << "Perimetro: " << r.CalcularPerimetro() << '\n';
    return 0;
}