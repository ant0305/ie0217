#include <iostream>
#include "estudiante.hpp"

#include <iostream>
#include "estudiante.hpp"

/**
 * @file main.cpp
 * @brief Programa de ejemplo que utiliza la clase Estudiante para crear un objeto.
 * 
 * Este programa incluye la declaracion de la clase Estudiante desde el archivo
 * "estudiante.hpp", crea un objeto y le asigna un nombre y una edad.
 * 
 * @author ant0305
 * @date 17/01/2024
 */

int main() {
    // Creacion de un objeto.
    Estudiante estudiante("Juan", 20);

    // Mostrar datos.
    estudiante.mostrarDatos();

    return 0;
}
