#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP


#include <string>
/**
 * @brief Clase Estudiante la que posee atributos, un constructor
 * y una funcion para inprimir los datos
 */
class Estudiante {
public:
    /**
     * @brief Constructor 
     */
Estudiante(const std::string& nombre, int edad);
    /**
     * @brief Metodo para imprimir
     */
void mostrarDatos();

private://Se declaran atributos
std::string nombre;
int edad;
int edad2;
};
#endif