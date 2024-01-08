#include <iostream>

/*
El programa muestra la suma de dos fracciones usando 
sobrecarga de operadores
*/

using namespace std;

class Fraccion {//Se crea una clase fraccion
    int numerador, denominador;//Variables
    public://Se crea un acceso
        Fraccion(int n, int d): numerador (n), denominador (d) {}//Constructor de la clase
//Se define el operador que se quiere sobre cargar(+)
    Fraccion operator+ (const Fraccion &f) {
        Fraccion resultado(
        numerador* f.denominador + f.numerador * denominador,
        denominador *f.denominador
    );
return resultado;
}
    void imprimir() {//Se crea una funcion
      cout << numerador << "/" << denominador << endl;
}
};
int main() {//Menu principal
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    Fraccion f3 = f1 +f2;
    f3.imprimir();

 return 0;
}