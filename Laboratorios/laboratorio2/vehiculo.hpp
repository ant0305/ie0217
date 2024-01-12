#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
using namespace std;

class vehiculo {
public:
    vehiculo(int velocidad);
    void acelerar();
    void frenar();

protected:
    int velocidad;
};

#endif 
