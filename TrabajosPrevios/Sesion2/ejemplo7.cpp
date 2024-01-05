#include <iostream>
/*
El programa muestra si el numero es mayor o menor a cero o igual a cero
*/
using namespace std;

int main() {

    int number = -2;//Variable local
    //Pasa por las estructuras condicionales 
    if (number > 0) { cout << "Numero mayor a cero!";
    }
    else if (number == 0) { cout << "Numero igual a cero!";
    }
    else { cout << "Numero es menor a cero";
    }
return 0;
}