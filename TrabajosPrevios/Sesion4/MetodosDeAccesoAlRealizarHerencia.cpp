#include <iostream>

/*
El programa muestra los diferentes accesos que se le
pueden dar a una clase derivada
*/

using namespace std;

class Base {
public:
int x;
protected:
int y;
private:
int z;
};

class PublicDerived: public Base {
// x es publico
// y es protegido
// z no es accesible
};
class ProtectedDerived: protected Base {
// x es protegido
// y es protegido
// z no es accesible
};
class PrivateDerived: private Base {
// x es privada
// y es privada
// z no es accesible
};


int main() {

    // Crear objetos de las clases derivadas
    PublicDerived publicObj;
    ProtectedDerived protectedObj;
    PrivateDerived privateObj;

    publicObj.x = 10;  //x es público, es la que se puede acceder desde el main
//El resto dan un mensaje de error
    return 0;
}