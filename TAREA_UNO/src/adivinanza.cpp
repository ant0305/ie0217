#include "adivinanza.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void JuegoAdivinanza::iniciarMenu() {
int opcion;
do {
    cout << "Bienvenido al juego de adivinanza:" << endl;
    cout << "1. Jugar adivinanza con indicaciones exactas" << endl;
    cout << "2. Jugar adivinanza con indicaciones 'frio/caliente'" << endl;
    cout << "3. Salir" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            jugarAdivinanza();
            break;
        case 2:
            jugarAdivinanza();
            break;
        case 3:
            cout << "Gracias por jugar. Hasta luego." << endl;
            break;
        default:
            cout << "Opcion no valida. Intentelo de nuevo." << endl;
    }
} while (opcion != 3);
}


void JuegoAdivinanza::jugarAdivinanza() {
    // Configuración del intervalo
    int inicio, fin;
    cout << "Ingrese el inicio del intervalo: ";
    cin >> inicio;
    cout << "Ingrese el fin del intervalo: ";
    cin >> fin;

    // Generación de número aleatorio
    srand(time(0));
    int numeroSecreto = inicio + rand() % (fin - inicio + 1);

    // Configuración del número de intentos
    int intentosMaximos = (fin - inicio + 1) / 3;




}