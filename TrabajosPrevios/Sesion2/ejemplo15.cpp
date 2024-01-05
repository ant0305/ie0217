#include <iostream>

/* 
El programa identifica cual numero es divisible por 2 y cual no
*/


using namespace std;

int main() {
    int i = 0;

    while (i < 10) {
        //Codigo dentro del bucle
        cout << "Numero: " << i << endl;

        //Condicion para continuar con la proxima iteracion
        if (i % 2 == 0) {
            cout << "El numero es divisible entre 2" << endl;
            ++i;
            continue;
        }

        //Mas codigo dentro del bucle
        cout << "El numero no es divisible entre 2"<< endl;

        //Actualizar la condicion de salida del bucle
        ++i;
    }

    return 0;
}


