#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que utiliza una clase plantilla con multiples y parametros predeterminados
 *
 * Este programa muestra una implementacion de una clase plantilla con multiples parametros
 * y un parametro predeterminado
 *
 * @author ant0305
 * @date 13/01/2024
 */

using namespace std;

// Clase plantilla con multiples parametros
template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1;
    U var2;
    V var3;

public:
    /**
     * @brief Constructor de la clase
     * @param v1 Valor para var1
     * @param v2 Valor para var2
     * @param v3 Valor para var3, predeterminado si el usuario no lo especifica
     */
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}

    /**
     * @brief Imprime los valores de las variables de la clase
     */
    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // Crear objeto con tipos int, double y char
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // Crear objeto con tipos double, char y bool
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}
