#include <iostream>
#include <string>

/*
El programa da las caracteristicas de  una mascota usando
clases y clases derivadas
*/

using namespace std;

class Animal {//Se crea una clase

private:
string color;//Atributos

protected:
string type;//Atributos

    public://Se crea un acceso y varios metodos
     void run() { cout << "I can run -- BASE!" << endl; }
     void eat() { cout << "I can eat!" << endl; }
     void sleep() { cout << "I can sleep!" << endl; }
     void setColor(string clr) { color = clr; }
     string getColor() { return color; }
};
class Dog: public Animal {//Se crea una clase y hereda atributos de la clase base

public://Se crea un acceso y varios metodos
    void run() { cout << "I can run - DERIVED!" << endl; }//Funcion
    void setType(string tp) { type = tp; }//Funcion
    void displayInfo(string c) {//Funcion
     cout << "I am a " << type << endl;
     cout << "My color is " << c << endl;
}
    void bark() { cout << "I can bark! Woof woof!!" << endl; }//Funcion
};
int main() {
    Dog dog1;//Lamando a los miembros de las clases
     dog1.run();
     dog1.eat();
     dog1.sleep();
     dog1.setColor("black");
     dog1.bark();
     dog1.setType("Doberman");
     dog1.displayInfo(dog1.getColor());
    return 0;
}