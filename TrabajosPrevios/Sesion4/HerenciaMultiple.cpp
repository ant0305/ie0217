#include <iostream> 

/*
El programa muestra como una misma clase puede 
heredar a varias clases.
*/

using namespace std;

class Mammal {
    public:
     Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};
class WingedAnimal {
    public:
     WingedAnimal() {
      cout << "Winged animal can flap." << endl;
    }
};
class Bat: public Mammal, public WingedAnimal {};

int main() {
    Bat b1;
  return 0;
}