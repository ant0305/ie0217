#ifndef PERSONA H
#define PERSONA H

/*
El programa se uso para crear una clase llamada persona con 
diferentes tipos de accesos y un constructor y funciones
*/


#include <string>

using namespace std;

class Persona {//Se crea la clase persona
private://Se crea un acceso
    string nombre;
    int edad;
public://Se crea un acceso
    Persona(string nombre, int edad);//Se crea un constructor
    string getNombre();
    int getEdad();
    void setEdad(int edad);
};
#endif 