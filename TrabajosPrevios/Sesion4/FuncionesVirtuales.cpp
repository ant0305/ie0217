#include <iostream>

/*
El programa hace una impresion sencilla de texto, pero utiliza 
una funcion virtual para que en la clase derivada se
deba sobreescribir.
*/

using namespace std;

class Base {//Clase base
    public:
     virtual void print() {
      cout << "Base Function" << endl;
    }
};
class Derived: public Base {//Clase derivada
    public:
     void print() {
      cout << "Derived Function" << endl;
}
};
int main() {
    Derived derived1;

    //Se declara un puntero que apunta a derived1
    Base* base1 = &derived1;

    //Se llama la funcion miembro de la clase derivada
    base1->print();

return 0;
}