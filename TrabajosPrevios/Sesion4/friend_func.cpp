#include <iostream>

/*
El programa muestra una distancia pero utiliza una 
funcion amiga para acceder a un atributo privado
*/

using namespace std;

class Distance {
private:
int meter;
//Funcion amiga
friend int addFive (Distance);
public:
Distance() : meter(0) {}


};
int addFive(Distance d) {
//Acceder a miembros privados desde la funcion amiga
d.meter += 5;
return d.meter;
}


int main() {
     Distance D;
      cout << "Distance: " << addFive(D);
  return 0;
}