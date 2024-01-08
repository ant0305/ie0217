#include <iostream>

/*
El programa hace una suma sencilla pero utiliza dos
funciones amigas para acceder a atributos privados
*/

using namespace std;

class ClassB;

class ClassA {
public:
//El constructor inicializa un objeto
ClassA(): numA(12) {}

private:
    int numA;
    //Se declara la funcion amiga
     friend int add(ClassA, ClassB);
};

class ClassB {
    public:
    //El constructor inicializa un bojeto
    ClassB(): numB (1) {}
     private:
      int numB;
    //Se declara una funcion amiga
    friend int add(ClassA, ClassB);
};

//Se accede a los miembros de la clase
int add(ClassA objectA, ClassB objectB) {
return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;

    ClassB objectB;
     cout << "Sum: "<< add(objectA, objectB);
 return 0;
}