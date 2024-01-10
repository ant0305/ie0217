#include "adivinanza.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

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
    modo = opcion;

    switch (opcion) {
        case 1:
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
    // Configuracion del intervalo
    int inicio, fin;
    cout << "Ingrese el inicio del intervalo: ";
    cin >> inicio;
    cout << "Ingrese el fin del intervalo: ";
    cin >> fin;

    // Generacion de numero aleatorio
    srand(time(0));
    int numeroSecreto = inicio + rand() % (fin - inicio + 1);

    // Configuracion del numero de intentos
    int intentosMaximos = (fin - inicio + 1) / 3;


    int intentos = 0;
    int guess;
    bool adivinado = false;

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
