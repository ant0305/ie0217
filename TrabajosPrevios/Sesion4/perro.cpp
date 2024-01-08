#include <iostream>

/*
El programa crea un objeto y se llaman funciones tanto 
de la clase principal como de la clase derivada
*/

using namespace std;

class Animal {//Se crea una clase

    public://Se crea un acceso y varios metodos
      void eat() {
        cout << "I can eat!" << endl;
        }
      void sleep() {
        cout << "I can sleep!" << endl;
    }
};
class Dog: public Animal {//Se crea una clase y hereda atributos de la clase base 

    public:
      void bark() {
        cout << "I can bark! Woof woof!!" << endl;
        }
};
int main() {

    Dog dog1;
    //Lamando a los miembros base de la clase

    dog1.eat();
    dog1.sleep();
    //Llamando al miembro derivado de la clase
    dog1.bark();

  return 0;
}