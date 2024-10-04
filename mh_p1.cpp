#include "mh_p1.h"

std::vector<AlumnoTupla> GuardarCalificaciones()
{
    int cantidad_alumnos = 0;
    std::cout << "Cuantos alumnos quieres ingresar? : ";
    std::cin >> cantidad_alumnos;

    std::vector<AlumnoTupla> lista_alumnos;

    for (int i=0; i < cantidad_alumnos; i++)
    {
        std::string nombre = "";
        float nota = 0.0f;
        std::cout << "Datos alumno: " << (i + 1) << '\n';
        std::cout << "Ingrese nombre:" ;
        std::cin >> nombre;
        std::cout << "Ingrese nota:" ;
        std::cin >> nota;

        AlumnoTupla tupla{ nombre, nota };
        lista_alumnos.push_back(tupla);
    }

    return lista_alumnos;
}



float CalcularCalificacionPromedio(std::vector<AlumnoTupla> alumnos)
{
    float total = 0.0f;
    for (auto [nombre, nota] : alumnos)
    {
        total += nota;
    }
    const float promedio = total / alumnos.size();
    return promedio;
}

void ObtenerCantidadSuperiorPromedio()
{
}

void ImprimirEstudianteMayorNota()
{
}

void ImprimirAlumnos(std::vector<AlumnoTupla> alumnos)
{
    /*for (AlumnoTupla alumno : alumnos)
    {
        std::string nombre = std::get<0>(alumno);
        float nota = std::get<1>(alumno);
        std::cout << "<alumno nombre=" << nombre << " nota=" << nota << " />"
    }*/
    for (auto [nombre, nota] : alumnos)
    {
        std::cout << "<alumno nombre=" 
                  << nombre << " nota=" 
                  << nota << " />\n";
    }
}
