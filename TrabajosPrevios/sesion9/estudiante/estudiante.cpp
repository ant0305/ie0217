#include <iostream>
#include "estudiante.hpp"


/**
 * @brief Se desarrolla el metodo mostrarDatos
 * @param nombre nombre del estudiante
 * @param edad edad del estudiante
 * @details El constructor le asigna los valores al objeto estudiante
 */
Estudiante:: Estudiante (
const std::string& nombre, int edad
): nombre(nombre), edad(edad) {}

/**
 * @brief Se desarrolla el metodo mostrarDatos
 * @details Este metodo es el encargado de imprimir los datos del estudiante
 */
void Estudiante::mostrarDatos() {
std::cout << "Nombre: " << nombre;
std::cout << ", Edad: " << edad << std::endl;
}