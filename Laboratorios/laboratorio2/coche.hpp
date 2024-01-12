
#ifndef COCHE_HPP
#define COCHE_HPP

#include "vehiculo.hpp"

class coche : public vehiculo {
public:
    coche(int velocidad, int numPuertas);
    void acelerar(); 
    void frenar();   
    void abrirPuertas();

private:
    int numPuertas;
};

#endif 
