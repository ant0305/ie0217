#include "Moto.hpp"

Moto::Moto(int velocidad, bool tieneCasco) : vehiculo(velocidad), tieneCasco(tieneCasco) {}

void Moto::usarCasco() {
    if (tieneCasco) {
        std::cout << "Usando casco mientras conduce" << std::endl;
    } else {
        std::cout << "No tiene casco" << std::endl;
    }
}
