/**
 * @file main.cpp
 * @brief Programa principal para iniciar el juego de adivinanza.
 *
 * Descripcion mas detallada del archivo y su proposito.
 *
 * @details Este archivo contiene la funcion principal para iniciar el juego
 * de adivinanza utilizando la clase JuegoAdivinanza.
 *
 * @author ant0305
 * @date 10/01/2024
 * @license GPL
 */

#include <iostream>
#include "adivinanza.hpp"

/**
 * @brief Funcion principal del programa.
 *
 * Esta funcion crea una instancia de la clase JuegoAdivinanza y llama al
 * metodo iniciarMenu para comenzar el juego de adivinanza.
 *
 * @return 0 si la ejecucion es exitosa.
 */
int main() {
    JuegoAdivinanza juego;
    juego.iniciarMenu();
    return 0;
}
