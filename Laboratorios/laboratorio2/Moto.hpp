#ifndef MOTO_HPP
#define MOTO_HPP

#include "vehiculo.hpp"

class Moto : public vehiculo {
public:
    Moto(int velocidad, bool tieneCasco);
    void usarCasco();

private:
    bool tieneCasco;
};

#endif 