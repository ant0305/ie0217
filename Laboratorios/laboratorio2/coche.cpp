#include "coche.hpp"
#include <iostream>

coche::coche(int velocidad, int numPuertas) : vehiculo(velocidad), numPuertas(numPuertas) {}

void coche::acelerar() {
    std::cout << "Acelerando el coche a " << velocidad << " Km/h" << std::endl;
}

void coche::frenar() {
    std::cout << "Frenando el coche" << std::endl;
}

void coche::abrirPuertas(){
cout << "Abriendo las puertas"<<numPuertas<<"puertas del coche"<<endl;
}
