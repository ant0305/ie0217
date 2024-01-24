#include <iostream>
#include "email.hpp"

/**
 * @brief Funcion principal para validar una direccion de correo electronico.
 *
 * Esta funcion permite al usuario ingresar una direccion de correo electronico 
 * la cual sera revisada paa saber si cumple con los requisitos para ser una
 * direccion de correo valida o no.
 *
 * @return 0 si la operacion se realizo con exito.
 */
int main() {
    ValidadorEmail validador; // Se declara una variable de tipo ValidadorEmail
    std::string email; // Se almacena la direccion de coreo que el usuario ingresa

    std::cout << "Ingrese una direccion de correo electronico para validar: ";
    std::cin >> email;

    try {
        //Se verifica que la direccion ingresada es valida usando este metodo
        bool esValido = validador.esEmailValido(email);

        if (esValido) {
            std::cout << "La direccion de correo electronico es valida." << std::endl;
        } else {
            std::cout << "La direccion de correo electronico NO es valida." << std::endl;
        }
        //Se capturan excepciones si ocurren
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
