#include "matriz.cpp"
/**
 * @file main.cpp
 * @brief Funcion principal que inicia el programa.
 *
 * Esta funcion principal inicia el programa y realiza las siguientes acciones:
 * - Solicita al usuario seleccionar el tipo de datos para las matrices (enteros, flotantes o numeros complejos).
 * - Llama a la funcion `Matriz<int>::pedirTipoOperacion()` para 
 * solicitar al usuario la operacion a realizar y captura cualquier excepcion que pueda ocurrir.
 * - Segun el tipo de matriz seleccionado, crea matrices de ese tipo 
 * (int, float o numeros complejos) y solicita al usuario las dimensiones y datos para llenar las matrices.
 * - Utiliza la clase `ManejadorDeMatrices` para realizar y mostrar la operacion seleccionada en la consola.
 * - Maneja casos donde el tipo de matriz no es valido y muestra un mensaje de error.
 *
 */
int main() {
    //Define algunas variable necesarias
    int tipoMatriz;
    char operacion; 
    // Se define con que tipo de datos se desea trabajar
    std::cout << "Seleccione el tipo de datos de las matrices (1: int, 2: float, 3: Numeros Complejos): ";
    std::cin >> tipoMatriz;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//Se limpia el buffer

    try {
        //Llama a una funcion para mostrar al usuario las operaciones que pueden hacer
        operacion = Matriz<int>::pedirTipoOperacion(); 
    } catch (const std::exception& e) {//Captura una excepcion en caso de error
        std::cout << "Error: " << e.what() << std::endl;
        return 1; 
    }

    if (tipoMatriz == 1) {
        Matriz<int> m1, m2;
        m1.pedirDimensionesYDatos();
        m2.pedirDimensionesYDatos();
        ManejadorDeMatrices<int>::realizarOperacionesYMostrar(m1, m2, operacion);
    } else if (tipoMatriz == 2) {
        Matriz<float> m1, m2;
        m1.pedirDimensionesYDatos();
        m2.pedirDimensionesYDatos();
        ManejadorDeMatrices<float>::realizarOperacionesYMostrar(m1, m2, operacion);
    } else if (tipoMatriz == 3) {
        Matriz<std::complex<double>> m1, m2;
        m1.pedirDimensionesYDatos();
        m2.pedirDimensionesYDatos();
        ManejadorDeMatrices<std::complex<double>>::realizarOperacionesYMostrar(m1, m2, operacion);
    } else {
        std::cout << "Tipo de matriz no valido.\n";
    }

    return 0;
}
