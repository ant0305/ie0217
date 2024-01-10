/**
 * @file adivinanza.hpp
 * @brief Definicion de la clase JuegoAdivinanza.
 *
 * Descripcion mas detallada del archivo y su proposito.
 *
 * @details Este archivo contiene la declaracion de la clase JuegoAdivinanza, que
 * proporciona funcionalidades para jugar un juego de adivinanza.
 *
 * @author ant0305
 * @date 10/01/2024
 * @license GPL
 */

#ifndef ADIVINANZA_HPP
#define ADIVINANZA_HPP

/**
 * @class JuegoAdivinanza
 * @brief Clase que representa el juego de adivinanza.
 *
 * La clase JuegoAdivinanza proporciona metodos para iniciar el juego.
 */
class JuegoAdivinanza {
public:
    /**
     * @brief Inicia el menu del juego.
     *
     * Este metodo muestra el menu principal del juego y permite al usuario
     * seleccionar el modo de juego.
     */
    void iniciarMenu();

    /**
     * @brief Inicia el juego de adivinanza.
     *
     * Este metodo inicia el juego de adivinanza segun el modo seleccionado.
     */
    void jugarAdivinanza();

private:
    int modo; /**< Modo de juego seleccionado. */
};

#endif
