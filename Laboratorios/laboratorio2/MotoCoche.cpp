#include "MotoCoche.hpp"

MotoCoche::MotoCoche(int velocidad, int numPuertas, bool tieneCasco)
 : coche(velocidad, numPuertas), Moto(velocidad, tieneCasco){

    cout << "Instanciado un motocoche" << endl;
 }