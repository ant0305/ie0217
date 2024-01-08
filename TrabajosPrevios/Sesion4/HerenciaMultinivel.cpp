#include <iostream>

/*
El programa muestra como de una clase derivada se 
puede derivar otra y asi cuantas veces sea necesario
*/

using namespace std;

class A {
    public:
     void display() {
      cout<<"Base class content.";
    }
};

class B: public A {};

class C: public B {};

int main() {
     C obj;
     obj.display();
    return 0;
}