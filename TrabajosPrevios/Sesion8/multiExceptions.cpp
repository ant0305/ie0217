#include <iostream>

/**
 * @file main.cpp
 * @brief Programa que utiliza multiples excepciones para asi aumentar la efectividad del codigo
 *
 * Este programa utiliza multiples manejo de errores para garantizar la solides
 * del codigo
 *
 * @author ant0305
 * @date 13/01/2024
 */


using namespace std;


int main(){
    double numerator, denominador, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

        cout << "Enter array index ";
        cin >> index;

    try {
        //Lanza una excepcion si la matriz esta fuera de los limites.
        if (index >= 4)
        throw "Error: Array out of bounds";
        //No se muestra si la matriz esta fuera de los limites 
        cout << "Enter numerator ";
        cin >> numerator;

        cout << "Enter denominator";
        cin >> denominador;

        //Lanzar una excepcion si el denominador es cero
        if (denominador == 0)
        throw 0;

        //No ejecuta si el denominador es cero
        arr [index] = numerator / denominador;
        cout << arr[index] << endl;

    }
    //Capturar el error matriz fuera de los limites
    catch (const char* msg){
        cout << msg << endl;

    }
    //Captrara la excepcion dividir entre cero
    catch (int num){
        cout << "Error cannot divide by " << num << endl;

    }
    //Capturar cualquier otra excepcion
    catch (...){
        cout << "Error cannot divide by " << endl;

    }


    return 0;
}
