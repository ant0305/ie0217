/**
 * @file adivinanza.cpp
 * @brief Implementacion de la clase JuegoAdivinanza.
 *
 * Descripcion mas detallada del archivo y su proposito.
 * 
 * En este archivo es adonde se desarrollan todas las funciones del codigo
 * basicamente el cuerpo del programa
 *
 * @author ant0305
 * @date 10/01/2024
 * @license GPL
 */

#include "adivinanza.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/**
 * @brief Inicia el menu del juego.
 *
 * Este metodo muestra el menu principal del juego y permite al usuario
 * seleccionar el modo de juego.
 */
void JuegoAdivinanza::iniciarMenu() {
    int opcion;
    /**
     * @brief Ciclo do-while para mostrar el menu hasta que el usuario elija salir.
     */
    do {
        // Mostrar las opciones del menu
        cout << "Bienvenido al juego de adivinanza:" << endl;
        cout << "1. Jugar adivinanza con indicaciones exactas" << endl;
        cout << "2. Jugar adivinanza con indicaciones 'frio/caliente'" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        /**
         * @brief Establecer el modo de juego segun la opcion elegida por el usuario.
         */
        modo = opcion;
        // Utilizar un switch para el menu
        switch (opcion) {
            case 1:
            case 2:
                /**
                 * @brief Llama a la funcion jugarAdivinanza.
                 */
                jugarAdivinanza();
                break;
            case 3:
                /**
                 * @brief Muestra un mensaje de despedida.
                 */
                cout << "Gracias por jugar. Hasta luego." << endl;
                break;
            default:
                /**
                 * @brief Si la opcion no es valida le da un mensaaje de error.
                 */
                cout << "Opcion no valida. Intentelo de nuevo." << endl;
        }
    } while (opcion != 3);
}




/**
 * @brief Inicia los modos de juego
 *
 * Este metodo es el encargado de llevar acabo los mdos de juego que aparecen en
 * el menu
 * 
 */
void JuegoAdivinanza::jugarAdivinanza() {
    /**
     * @brief El usuario elige el intervalo de numeros en los que quiere jugar
     */
    int inicio, fin;
    cout << "Ingrese el inicio del intervalo: ";
    cin >> inicio;
    cout << "Ingrese el fin del intervalo: ";
    cin >> fin;
    /**
     * @brief Genera el numero aleatorio
     */
    srand(time(0));
    int numeroSecreto = inicio + rand() % (fin - inicio + 1);
    /**
     * @brief Configuracion de numero de intentos
     */
    int intentosMaximos = (fin - inicio + 1) / 3;

    //Creacion de variables necesarias
    int intentos = 0;
    int guess;
    bool adivinado = false;
/**
 * @brief Ciclo para crear la logica del juego
 */
while (intentos < intentosMaximos && !adivinado) {
cout << "Intento " << intentos + 1 << ": Ingrese su adivinanza: ";
cin >> guess;

if (guess == numeroSecreto) {
    cout << "Has adivinado el numero secreto." << endl;
    adivinado = true;
} else {
    if (modo == 1) {
        cout << "Incorrecto. El numero secreto es ";
        if (guess < numeroSecreto) {
                cout << "mayor." << endl;
        } else {
                cout << "menor." << endl;
        }
    } else if (modo == 2) {
            int diferencia = abs(numeroSecreto - guess);
        if (diferencia == 1) {
                cout << "Hirviendo! Estas muy cerca." << endl;
        } else if (diferencia <= 5) {
                cout << "Caliente. Estas cerca." << endl;
        } else if (diferencia <= 10) {
                cout << "Frio. Estas lejos." << endl;
        } else {
                cout << "Congelado. Estas muy lejos." << endl;
        }
    }
    intentos++;
}
}

if (!adivinado) {
    cout << "Has agotado tus intentos. El numero secreto era " << numeroSecreto << "." << endl;
}
}
