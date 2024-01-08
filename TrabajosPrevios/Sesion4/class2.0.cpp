#include <iostream>

/*
El programa hace el calculo de area y volumen usando una clase
ademas se agrego un destructor.
*/

using namespace std;
//Definicion de la clase
class Molde {
        public:
        double largo;
        double ancho;
        double altura;
    Molde() {
        cout << "Esto se ejecuta en cada instanciacion" << endl;
        cout << "Iniciando un objeto de la clase Room" << endl;
    }
        ~Molde() {
        cout << "Hola desde el destructor" << endl;
        }
    double calcularArea() {
        return largo * ancho;
    }
    double calcularVolumen () {
        return largo * ancho * altura;
    }
};
int main() {
    //Creacion de objeto
    Molde pared;
    //Asignar valores al objeto en la clase
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;
    //Se realizan los calculos
    cout << "Area= "<< pared.calcularArea() << endl;
    cout << "Volumen = "<< pared.calcularVolumen() << endl;
return 0;
}