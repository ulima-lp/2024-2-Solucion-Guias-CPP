#include "mh_p1.h"

int main()
{
    std::vector<AlumnoTupla> lista = GuardarCalificaciones();
    ImprimirAlumnos(lista);
    return 0;
}