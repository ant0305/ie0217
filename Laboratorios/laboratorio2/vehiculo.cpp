#include "vehiculo.hpp"

vehiculo::vehiculo(int param_velocidad) {
    this->velocidad = param_velocidad;
}

void vehiculo::acelerar() {
    cout << "Acelerando " << velocidad << " Km/h" << endl;
}

void vehiculo::frenar() {
    cout << "Frenando vehiculo" << endl;
}


