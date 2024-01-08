#include <iostream>

/*
El programa accede a las funciones que se encuentran 
en la clase base y en la clase derivada
*/


using namespace std;

class Base {//Se crea una clase
    public:
     void print() {
      cout << "Base Function" << endl;
    }
};

class Derived: public Base {//Se crea una clase y hereda atributos de la clase base
    public:
     void print() {
      cout << "Derived Function" << endl;
    }
};
int main() {
    //Accede a la funcion print() de la clase derivada
    Derived derived1, derived2;
    derived1.print();

    //Accede a la funcion print() de la clase base 
    derived2.Base::print();

return 0;
}