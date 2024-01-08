#include <iostream> 

/*
El programa muestra como una misma clase puede ser
heredada por varias clases en el mismo programa.
*/

using namespace std;

class Animal {
public:
void info() { cout << "I am an animal." << endl; }
};
class Dog: public Animal {
public:
void bark() { cout << "I am a Dog. Woof woof." << endl;}
};
class Cat: public Animal {
public:
void meow() { cout << "I am a Cat. Meow." << endl; }
};
int main() {
//Creaccion de objeto de clase perro
Dog dog1;
cout << "Dog Class:" << endl;
dog1.info(); 
dog1.bark();
//Crear objeto de clase gato
Cat cat1;
cout << "\nCat Class:" << endl;
cat1.info(); //Funcion clase principal
cat1.meow();
return 0;
}