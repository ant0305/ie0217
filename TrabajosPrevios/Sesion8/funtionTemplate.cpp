#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que imprime una suma usando una funcion template.
 *
 * El programa muestra una implementacion simple de una funcion plantilla, la cual
 * es capaz de tomar un dato de cualquier tipo y hacer operaciones con ellos.
 *
 * @author ant0305
 * @date 13/01/2024
 */

using namespace std;

/**
 * @brief Funcion template que suma dos valores.
 *
 * Esta funcion template toma dos genericos y devuelve la suma de ellos.
 *
 * @tparam T Tipo de los parametros y el resultado.
 * @param num1 Primer numero a sumar.
 * @param num2 Segundo numero a sumar.
 * @return Suma de los dos numeros.
 */
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}


int main() {
    int result1;
    double result2;

    // Usando la funcion con parametros enteros
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // Usando la funcion con parametros double
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
}