#include <iostream>

/* 
El programa es una calculadora sencilla
*/

using namespace std;

int main() {
    char oper;//Variable de caracter
    float num1, num2;//Variables flotantes
    
    cout << "Ingrese un operador (+, -, *, /): ";//Se solicita la operacion que se quiere realizar
    cin >> oper;

    cout << "Ingrese dos numeros: " << endl;//Se eligen los numeros
    cin >> num1 >> num2;
    //Se crean las condicionales para realizar las operaciones correctamente
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
    //Si el operador no es correcto se da un mensaje de error
    cout << "Error! el caracter ingresado no coincide";
    break;
    }

    return 0;
}