#include <iostream>

/*
El programa hace una suma sencilla pero utiliza una
funcion amiga para acceder a atributos privados, solo se va a 
tener acceso exterior a numA desde la clase amiga
*/

using namespace std;

class ClassB;
class ClassA {
    private:
      int numA;
      //Declaracion de la clase amiga
      friend class ClassB;
    public:
      //El constructor inicializa un objeto
      ClassA(): numA(12) {}
};
class ClassB {
    private:
      int numB;

    public:
    //El constructor inicializa un objeto
    ClassB(): numB (1) {}

    //Se crea una funcion
    int add() {
      ClassA objectA;
      return objectA.numA + numB;

    }
};
int main() {

  ClassB objectB;
  cout << "Sum: "<< objectB.add();

 return 0;
}