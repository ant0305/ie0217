#ifndef MOTOCOCHE_HPP
#define MOTOCOCHE_HPP

#include "coche.hpp"
#include "Moto.hpp"

class MotoCoche : public coche, public Moto{
  public:
  MotoCoche(int velocidad, int numPuertas, bool tieneCasco);
  
};
#endif