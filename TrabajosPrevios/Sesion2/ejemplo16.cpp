#include <iostream>

/* 
El programa hace una suma sencilla de dos numeros
*/

using namespace std;

//Declaración de la funcion
int sum(int a, int b) {
    //Retorna la suma de los dos parámetros
    return a + b;
}

int main() {

    int result = sum(5, 3);//Llama a la funcion

    //Imprime el resultado
    cout << "La suma es: " << result << endl;

    return 0;
}
