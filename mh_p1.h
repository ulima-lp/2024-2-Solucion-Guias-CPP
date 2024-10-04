#include <iostream>
#include <vector>
#include <tuple>

using AlumnoTupla = std::tuple<std::string, float>;

std::vector<AlumnoTupla> GuardarCalificaciones();
void CalcularCalificacionPromedio();
void ObtenerCantidadSuperiorPromedio();
void ImprimirEstudianteMayorNota();

void ImprimirAlumnos(std::vector<AlumnoTupla> alumnos);