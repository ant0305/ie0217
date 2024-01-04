#include <iostream>

/* El programa es una calculadora sencilla
*/

using namespace std;

int main() {
    char oper;
    float num1, num2;

    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> oper;

    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
    case '+':
    cout << num1 << "+" << num2 << "=" << num1 + num2;
    break;
    case '-':
    cout << num1 << "-" << num2 << "=" << num1 - num2;
    break;
    case '*':
    cout << num1 << "*" << num2 << "=" << num1 * num2;
    break;
    case '/':
    cout << num1 << "/" << num2 << "=" << num1 / num2;
    break;
    default:
    // El operador no coincide con ninguna constante de caso (+, -, *, /)
    cout << "Error! ¡El operador no es correcto!";
    break;
    }

    return 0;
}