#include "contactos.h"

int main()
{
    LibretaContactosXML libreta;
    libreta.AgregarContacto(
        "Arturo", 20, "999888777", "arturo@gmail.com", Sexo::Masculino
    );
    libreta.AgregarContacto(
        "Pepito", 18, "977333222", "pepito@gmail.com", Sexo::Masculino
    );
    libreta.ImprimirDatos();
    return 0;
}