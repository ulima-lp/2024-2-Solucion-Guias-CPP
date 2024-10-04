#include <iostream>
#include <vector>
#include <tuple>

using AlumnoTupla = std::tuple<std::string, float>;

std::vector<AlumnoTupla> GuardarCalificaciones();
float CalcularCalificacionPromedio(std::vector<AlumnoTupla> alumnos);
void ObtenerCantidadSuperiorPromedio();
void ImprimirEstudianteMayorNota();

void ImprimirAlumnos(std::vector<AlumnoTupla> alumnos);