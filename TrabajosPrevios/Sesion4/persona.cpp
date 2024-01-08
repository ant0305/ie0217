#include "persona.hpp"

/*
El programa solo se utilizo para la implementacion del constructor 
y la creacion de funciones necesarias para el correcto funcionamiento
del codigo
*/

using namespace std;

Persona:: Persona (string nombre, int edad) {//Implementacion del constructor
    this->nombre = nombre;
    this->edad = edad;
}
string Persona::getNombre() {//Se crea una funcion
    return nombre;
}
int Persona::getEdad() {//Se crea una funcion
    return edad;
}
void Persona::setEdad(int edad) {//Se creaa unafuncion
    this->edad = edad;
}