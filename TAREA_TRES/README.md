# Matrices en C++ y Comprobador de email en C++

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de C++
- Make

### Pasos para ejecutar los programas
1. Clona o descarga este repositorio en tu máquina local.
2. Luego agrega el Makefile a la carpeta src
3. Abre una terminal en el directorio del proyecto y escriba make
esto mostrar el menu de ayuda para ejecutar los programas
4. Luego ejecuta el comando del proyecto que quieras probar
ya sea el de matrices o el de comprobacion de email.


## Descripción de los Proyectos

- El proyecto de matrices se hizo para poder realizar diferentes operaciones con matrices
las cuales pueden esta compuestas ya sea por numeros reales(int, float)
o por numeros complejos.

- El proyecto de email se hizo para poder comprobar si los emails creados
tienen una estructura correcta.

## Estructura de los Proyectos

- `main.cpp`: Contiene la función principal del programa matrices y la inicialización del programa
- `matriz.cpp`: Contiene todo el desarrollo de los diferentes metodos para 
poder realizar las operaciones correctamente
- `matriz.hpp`: Contiene todas las declaraciones de las diferentes clases y
metods que se van a usar a la hora de trabajar con las matrices
- `email.hpp`: Guarda la declaracion de clases y el desarrollo de los
metodos ahi mismo
- `main2`: Contiene el programa principal de la comprobacion de email.
## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!

# Parte teoria

## Pregunta 1.
Una plantilla es una herramienta simple pero muy poderosa en C++, La idea simple es pasar el tipo de datos como parámetro para que no necesitemos escribir el mismo código para diferentes tipos de datos, es decir el template es capaz de procesar cualquier tipo de dato. Por ejemplo, es posible que una empresa de software necesite ordenar() para diferentes tipos de datos. En lugar de escribir y mantener varios códigos, podemos escribir un sort() y pasar el tipo de datos como parámetro, esto nos ahorraría muchas líneas de código haciendo el programa más legible y actualizable.[1]
Ejemplo código:
```cpp
//Codigo en c++
#include <iostream>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
 
int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;
 
    return 0;
}
```
## Pregunta 2.
La sobrecarga de funciones con plantillas se logra cuando se crea una funcion generica usando la sintaxis "template <typename tipoDato>", esto hace que la funcion pueda trabajar con diferentes tipos de argumentos.

## Pregunta 3.
Al usar plantillas de clases la clase tiene la capacidad de trabajar con tipos de datos genéricos esto permite hacer el código más legible, más fácil de manter y actualizar.
Para utilizar una plantilla de clase se debe proporcionar el tipo de datos que se desea utilizar en signos de menor y mayor (<>) al instanciar la clase.

## Pregunta 4.
try: La sintaxis try está encargada de iniciar el codigo para el manejo de excepciones, es la que almacena la parte del código el cual podría incurrir en un error.
Se utiliza escribiendo la palabra try luego corchetes {} y después la parte de código que podría incurrir en el error.
```cpp
//Codigo en c++
try {
    // Código el cual podría dar el error
} 
```
catch: El bloque de código catch es el encargado de manejar la excepcion que atrapó el throw, pueden haber varios bloques de la sintaxis catch para atrapar diferente tipos de excepciones.
Se utiliza escribiendo la palabra reservada catch luego paréntesis y adentro de los paréntesis escribe la excepción que atrapó el throw y luego puede enviar un mensaje de error.
Ejemplo:
```cpp
//Codigo en c++
catch (int ex){
        std::cout << "Excepcion: " << ex << std::endl;
    }
```
throw: La throw palabra clave genera una excepción cuando se detecta un problema, lo que nos permite crear un error personalizado.
Se utiliza escribiendo la palabra throw y luego cualquier expresión que sea correspondiente a la excepción.
Ejemplo:
```cpp
//Codigo en c++
throw exception;
```
Ejemplo completo de toda la sintaxis:
```cpp
//Codigo en c++
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}
```
[2]
## Pregunta 5.
1. std::bad_alloc: Está es una excepción estándar de c++ y se da cuando hay una mala asignación de la memoria estándar en c++ debido a la falta de memoria.[3]
Es particularmente útil cuando se trabaja con operaciones de matrices dinámicas a las cuales se les asigna memoria dinámicamente.

2. std::bad_cast: Se produce una excepción de este tipo cuando una asignación dinámica no se puede realizar de manera valida (por ejemplo porque los tipos no están relacionados por herencia).[3]
Está excepción es muy útil cuando estamos trabajando con punteros y clases.

3. std::bad_typeid: Se produce una excepción de este tipo cuando se aplica un operador typeid a un valor de puntero nulo, la operación typeid se utiliza para obtener información sobre el tipo de un objeto.[3]
Es útil cuando se trabaja con herencia y polimorfismo y se necesita conocer el tipo real de un objeto.

## Pregunta 6.
Una política de manejo de excepciones es una serie de de pasos que definen como se debe proceder con las excepciones que se puedan encontrar en el programa. Esto es importante porque hace que el código que está en desarrollo o que ya se haya desarrollado sea más legible y robusto dando mayor estabilidad y calidad al software, esto tiene como objetivo entre otras cosas facilitar la obtención de errores y mejorar la experiencia del usuario.[4]

## Pregunta 7.
En C++, el operador noexcept es un operador en tiempo de compilación que se utiliza para comprobar si una expresión generará una excepción.[5]
En otras palabras se utiliza para especificar que una función no arrojara una excepción informa al compilador sobre el comportamiento de excepciones en la función esto permite al compilador el manejo de excepciones y la optimización.
Se utiliza escribiendo la palabra clave noexcept después de declarar la función así:
- Void ejemplo () noexcept{}

## Pregunta 8.
1. Vector:  Como su nombre lo indica facilita las diferentes operaciones con vectores como la de permitir la insercion o eliminación de elementos y acceso directo a cualquier elemento.[6]
2. Deque: 
Se utiliza para realizar inserciones y eliminaciones rápidas y ofrece acceso aleatorio a cualquier elemento, se usa cuando se requiere un orden específico de salida ya que usa el principio de primero es entrar primero en salir.[6]
3. List: Lista con inserción doble, inserción y eliminacion rápida en cualquier parte.
Tiene una mayor utilidad cuando la modificación frecuente de la estructura y el acceso secuencial de los elementos es crítico.[6]
4. Set: Búsqueda rápida y no se permiten duplicados, es útil cuando se necesita que los elementos estén ordenados de menor a mayor o de mayor a menor sin repetirse.[6]
5. Map: Asociación de uno a uno esto quiere decir que almacenan datos en pares clave-valor, es útil cuando se necesita un acceso rápido a ciertos elementos y esto se logra por medio de las claves.[6]

## Pregunta 9.
Los iteradores en la STL son los permiten recorrer todos o algunos elementos almacenes en ella según un orden ya establecido puede retornar una referencia a cada uno de los elementos ubicados en el contenedor.[7]
Se puede usar iteradores de forma explícita con funciones miembro y globales, como begin() y end() y operadores, como ++ y -- para desplazarse hacia delante o hacia atrás y se accede usando *.[8]

## Pregunta 10.
1. for_each(): Va por cada elemento realizando una operación sobre cada uno de ellos.[9]
2. find(): Regresa el primer elemento de un intervalo que coincide con un valor en específico.[9]
3. count(): Se utiliza para contar un número de elementos iguales en un intervalo a un valor en específico proporcionado.[9]

## Pregunta 11.
Para utilizar un algoritmo personalizado con la STL es importante conocer el funcionamiento exacto de cada contenedor ya que el algoritmo que estemos realizando deberá interactuar con ellos, esto es porque cada contenedor almacena mucha información y es posible que termine entorpeciendo el código.[10]
También es importante tener claro el uso de iteradores ya que son parte clave de la STL la cual permite recorrer los contenedores, además de esto si el algoritmo va a trabajar con diferentes tipos de datos una buena práctica sería usar plantillas para evitar cualquier contratiempo y como puntos finales es necesario probar el algoritmo para asegurarse que funciona correctamente además de proporcionar documentacion y ejemplos.[10]

## Pregunta 12.
Las expresiones regulares también llamadas regex o regexp son patrones que se usan para encontrar o manipular texto en una cadena de caracteres de una manera más flexible y poderosa. Estos patrones describen secuencias de caracteres específicos que se usan para buscar o reemplazar en un texto más grande.
Un ejemplo podría ser el imail:
ejemplo1@gmail.com


## Pregunta 13.
1. Signo de interrogación (?):
Al menos una repetición de lo que precede; es lo mismo que [0,1].
Es decir que el carácter puede aparecer cero o una vez en la cadena.[11]
2. Signo de más (+):
Una o más repeticiones de lo que precede.
Osea que el elemento anterior debe aparecer al menos una o más veces en la cadena.[11]
3. Asterisco (*): 
Cero o más repeticiones de lo que precede
En otras palabras indica que el elemento anterior puede aparecer cero o más veces en una cadena.[11]

## Pregunta 14.
Para utilizar expresiones regulares en C++ se debe exportar la librería estándar <regex>.
Ejemplo de la implementacion:
```cpp
//Codigo en c++
#include <iostream>
#include <regex>
#include <string>
int main() {
    std::string texto = "Encuentrame en info@example.com o en web@example.net";
    std::regex patron_email(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b)");

    std::smatch resultados;
    
    while (std::regex_search(texto, resultados, patron_email)) {
        std::cout << "Email encontrado: " << resultados[0] << '\n';
        texto = resultados.suffix().str();
    }
    
    return 0;
}
```
[12]

## Pregunta 15.
Son útiles para la validación de patrones porque nos permiten buscar y seleccionar cadenas de caracteres que cumplan con un patrón específico, validar la calidad de los datos, y normalizar datos de manera consistente, proporcionando una manera muy flexible de realizar estas tareas.

1.
[Plantillas en C++ con ejemplos](https://www.geeksforgeeks.org/templates-cpp/)

2.
[Excepciones de C++](https://www.w3schools.com/cpp/cpp_exceptions.asp)

3.
[cppreference.com](https://en.cppreference.com/w/cpp/types/bad_cast)

4.
[El arte de manejar errores en la programación: consejos y técnicas para principiantes](https://reparartuordenador.com/aprendiendo-a-manejar-errores-en-la-programacion)

5.
[Operador noexcept en C++ 11](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/)

6.

[Repaso a la STL: Introducción a los contenedores](https://www.google.com/amp/s/www.genbeta.com/desarrollo/repaso-a-la-stl-introduccion-a-los-contenedores/amp)

7.
[STL](https://ccia.ugr.es/~jfv/ed1/c++/cdrom4/paginaWeb/stl.htm)

8.
[Iterators](https://learn.microsoft.com/es-es/cpp/standard-library/iterators?view=msvc-170)

9.
[Algoritmos STL](https://r0d.developpez.com/articles/algos-stl-es/)

10.
[STL en C++](https://www.include-poetry.com/Code/C++/Estructuras/STL/)

11.
[Capítulo 5. Expresiones regulares](https://www.ibiblio.org/pub/linux/docs/LuCaS/Manuales-LuCAS/doc-guia-usuario-ruby/doc-guia-usuario-ruby-html/c173.html)

12.
[Uso de expresiones regulares](https://forkful.ai/es/cpp/using-regular-expressions/)