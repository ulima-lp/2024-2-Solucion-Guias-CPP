#include "mh_p1.h"

int main()
{
    auto lista = GuardarCalificaciones();
    //ImprimirAlumnos(lista);
    const float promedio = CalcularCalificacionPromedio(lista);
    std::cout << '\n' << "Promedio: " << promedio << '\n';
    const int cant_mayores_promedio = ObtenerCantidadSuperiorPromedio(lista);
    std::cout << "Cantidad mayores prom: " << cant_mayores_promedio << '\n';

    return 0;
}