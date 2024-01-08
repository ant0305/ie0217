#include <iostream>
#include "persona.hpp"

/*
El programa crea un objeto p llamado Juan luego le da 
ciertas caracteristicas y hace algunos cambios
*/

using namespace std;

int main() {
    Persona p("Juan", 25);//Creacion de objeto

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    p.setEdad (26);//Se cambia la edad

    cout << "Nueva edad: " << p.getEdad() << endl;

return 0;
}