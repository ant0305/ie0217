#include <iostream>

/*
El programa utiliza clases para crear las caracteristicas de una
mascota y estas clases vienen integradas con diferentes tipos de accesos
*/


using namespace std;


class Animal {//Se crea una clase
    public://Se crea un acceso
    void setEdad (int age) {
    edad = age;
    }
    int getEdad() {
    return edad;
    }
    protected://Se crea un acces
    string nombre;

    private://Se crea un acceso
    int edad;
};

    class Perro: public Animal {
    public:
    void setNombre(string n) {
    nombre = n;
    }
    string getNombre() {
    return nombre;
    }
};
int main() {
    Perro miPerro;//Creacion de objeto
    //Se agregan datos al objeto
    miPerro.setNombre("Toby");
    miPerro.setEdad (3);
    cout << "Mi perro se llama "<< miPerro.getNombre() << endl; 
    cout << "y tiene "<< miPerro.getEdad() << " anios." << endl;
return 0;
}