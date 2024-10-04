#include "mh_p1.h"

int main()
{
    auto lista = GuardarCalificaciones();
    //ImprimirAlumnos(lista);
    const float promedio = CalcularCalificacionPromedio(lista);
    std::cout << "Promedio: " << promedio << '\n';

    return 0;
}