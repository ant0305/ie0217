# Juego de Adivinanza en C++

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de C++
- Make

### Pasos para ejecutar el programa
1. Clona o descarga este repositorio en tu máquina local.
2. Abre una terminal en el directorio del proyecto.
3. Ejecuta el comando make para compilar el programa:
    ```
    make
    ```
    Esto utilizará las reglas definidas en tu Makefile para compilar el código fuente.
4. Ejecuta el programa:
    ```
    ./my_programa.exe
    ```

## Descripción del Juego

El juego de adivinanza permite al usuario intentar adivinar un número secreto generado aleatoriamente dentro de un intervalo especificado. Hay dos modos de juego, indicaciones exactas y "frío/caliente".

## Estructura del Proyecto

- `main.cpp`: Contiene la función principal y la inicialización del juego.
- `JuegoAdivinanza.hpp`: Archivo de cabecera que declara la clase `JuegoAdivinanza`.
- `JuegoAdivinanza.cpp`: Contiene la implementación de las funciones de la clase.


## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!


# Parte teoria

## Primera parte

### Pregunta 1.
- Entre las diferencias están que C++ ofrece una mayor abstracción que C y una programación más modular, pero la principal diferencia sería que C++ se basa en principios de programación orientada a objetos (POO) y en X estoy no existe.

### Pregunta 2.
Algunas diferencias son:
1. El lenguaje compilado genera un file binario no modificable y el lenguaje interpretado es escrito en un lenguaje de programación definido y modificable en cada momento
2. En el lenguaje compilado las instrucciones van enviadas directamente al procesador y en el lenguaje interpretado las instrucciones deben traducirse antes de llegar al procesador.
3. En el lenguaje compilado la ejecución esas rápida que en el lenguaje interpretado 
4. En el lenguaje compilado los errores impiden que se compile el codigo en el interpretado los errores son solo visibles si se inicia el programa.
Ejemplos en los que es mejor usar un lenguaje compilado:
- Desarrollo de controles de hardware que deben interactuar directamente con componentes físicos.
- Desarrolo de juegos o aplicaciones gráficas 3D.
- Desarrolo de sistemas operativos.
Ejemplos en los que es mejor usar un lenguaje interpretado:
- Para tareas de automatización.
- Para el desarrollo web.
- Para proyectos de menor escala dónde la eficiencia de ejercucion no es crítica.

### Pregunta 3.
El linker es el encargado de garantizar que todas las partes del programa estén conectadas correctamente toma los objetos y los une para crear ejecutables. También busca las librerías que se quieran añadir, y las añade en el caso de que sean librerías estáticas.
Si función principal tomar los objetos generados en los primeros pasos del proceso de compilación, quita aquellos recursos que no necesita, y enlaza el código objeto con sus bibliotecas con lo que finalmente produce un fichero ejecutable o una biblioteca.
Es esencial porque sin el sería imposible crear el ejecutable para poder utilizar el código.

### Pregunta 4.
- Los tipos de datos primarios son los que están definidos adentro del lenguaje los tipos de datos derivados se forman apartir de los datos primarios.

- Los datos primarios tienen tienen un tamaño fijo y los derivados no.

- Los datos primarios se utilizan para realizar operacion básicas y los datos derivados se usan para realizar operaciones avanzadas.

### Pregunta 5.
Declarar una variable es especificar su nombre y sus características y guardarle un campo en la memoria a esa variable e inicializar una variable quiere decir darle un valor inicial a esa variable ya declarada.[2]

### Pregunta 6.
La sobrecarga en C++ es la capacidad de definir varias funciones con el mismo nombre y para que el compilador pueda diferenciarlas estás tienen que recibir diferentes tipos de datos o diferentes número de datos.
Algunos de sus beneficios son: permite la reutilización de nombres, mayor legibilidad del código y facilidad para realizar las mismas operaciones pero con diferentes datos.

### Pregunta 7.
Un puntero es un tipo de variable, almacena la dirección de un objeto en memoria y se usa para acceder a ese objeto.
Un puntero se utiliza usando el ampersand(&), para obtener la dirección de memoria de una variable cualquiera y el asterisco(*) que es el nos permite acceder a lo que está almacenado en esa dirección de memoria.
Un ejemplo podría ser tener un almacén lleno de objetos, cada uno de ellos enumerados y en la recepción pedir la enumeración específica de un objeto e ir a buscarlo.

### Pregunta 8.
Una variable global almacena el valor original de una operación en una función, porque si dicha operación realiza algún cambia a esta variable el cambio se verá reflejado para cualquier otra función que desee utilizar esta variable global.
Las razones para usarlas pueden ser: la reducción de parámetros, acceso global, evitar la repetición de parámetros. 

### Pregunta 9.
erase() :Este método sirve para borra una cantidad específica de caracteres de una cadena apartir de una posición dada, se puede borrar solo un elemento o varios dependiendo de cómo lo indique el usuario.
swap() :Se utiliza para intercambiar los elementos de dos cadenas de caracteres sin la necesidad de copiar los datos otra vez.
append() :Este método se utiliza para agregar caracteres al final de una cadena ya existente, extiende esta cadena al final de su valor actual.

### Pregunta 10.
El bucle do-while es una variante especial del bucle while, la principal diferencia es que al contrario del bucle while que comprueba la condición antes de entrar el bucle do-while la comprueba al final.
Esto implica que el bucle se ejecutara al menos una vez.
 
### Pregunta 11.
No es permitido almacenar funciones en una estructura en c++, porque las funciones no son tipos de datos y no tienen un tamaño predecible, las funciones representan bloques de código ejecutable y no se pueden almacenar de manera estática como los datos.
Los datos si se pueden encapsular públicos o privados adentro de una estructura, se hace con el comando public y comando prívate en las estructuras estos comandos funcionan similar a las clases pero poseen ciertas diferencias.

### Pregunta 12.
Es útil para que el código sea más legible y ordenado, además de que se puede reutilizar el código, facilita el mantenimiento del código y la escalabilidad.
Propósito de los archivos:
main.cpp :Contiene la función main que es la que funciona como como entrada para el programa, puede utilizar las clases y las funciones de los archivos.cpp y .hpp.
Funciones.hpp :Contienen las declaraciones de las clases, estructuras, funciones y variables que se utilizan en el programa
Funciones.cpp :Contienen la implementación real de las funciones y clases declaradas en los archivos .hpp.

### Pregunta 13.
Una conversion de tipos es básicamente la operación de cambiar una variable de un tipo de datos a otro.
Entre sus utilidades están, aprovechar ciertas características de las jerarquías de tipos o representaciones de tipos,  ademas de ayudar a calcular expresiones que contienen variables de diferentes tipos de datos.
Ejemplos:
1. Casting Implícito:
Ocurre automáticamente cuando el compilador convierte automáticamente un tipo de dato a otro sin intervención del programador y se realiza así:

`int entero = 5;
double decimal = entero;`

2. Conversión por asignación:
Esto se hace definiendo explícitamente el tipo requerido delante de la expresión entre paréntesis, de la forma (tipo) expresión, se usa cuando se quiere hacer una conversión rápida en un código pequeño pero no es recomendable porque no proporciona mucha claridad y se realiza así:
```cpp
// Código en C++
#include <iostream> 
using namespace std; 
int main() 
{ 
    double x = 1.2; 
    int sum = (int)x + 1; 
    cout << "Sum = " << sum; 
    return 0; 
}
```
3. Conversión mediante el operador Cast: 
Un operador Cast es un operador unario que obliga a un tipo de datos a convertirse en otro tipo de datos, se usa cuando se quiere hacer un código más robusto además de que ya ha remplazo en su mayoría a la conversación por asignación y se realiza así:
```cpp
// Código en C++
#include <iostream>
using namespace std; 
int main() { 
    float f = 3.5;
    int b = static_cast<int>(f); 
    cout << b; 
} 
```
Aunque en este ejemplo se uso el "static_cast" también exiten algunos más como el "dynamic_cast", "const_cast" entre otros.

### Pregunta 14.
La sentencia "goto" le da la capacidad al usuario de saltar a cualquier parte del programa pero no es recomendable porque vuelve al programa complejo y enredo solo se debe usar si es estrictamente necesario.
En la mayoría de los casos la sentencia goto se puede sustituir por un ciclo (for o while), o también por el uso de sentencias como break o continue que son mucho mas claras.

### Pregunta 15.
Las variables locales se almacenan en la pila de ejecución y las variables globales se almacenan en un segmento de datos.
Se guardan usando la sintaxis:
tipo nombre;
Variable locales:
Variables locales son las que pertenecen a una función o a un bloque, es decir, su existencia está ligada a esa función o bloque. La variable se crea en la pila del sistema cuando se invoca la función o cuando se ejecuta el código dentro del bloque, y se destruye cuando acaba la función o bloque.
Variables globales:
Una variable es global cuando se declara fuera de todos los bloques. Las variables globales se conocen a lo largo de todo el programa y se pueden utilizar desde cualquier sitio. Todas las funciones y bloques declarados después de una variable global, podrán acceder a ella. Si dentro de un bloque se repite la declaración de una variable definida en un bloque exterior, el acceso se referirá exclusivamente a la variable dentro del bloque más interno.
La diferencia fundamental es que la variable global es visible para todas las funciones que se declaran después de esta variable mientras que la variable local solo es visible en el lugar que se declaró.

### Pregunta 16.
Pasar por valor es trabajar con copias de los datos originales.
Pasar por referencia se usa cuando se quiere trabajar con la variable original directamente.
Pasar por puntero se usa cuando se quiere trabajar con la variable original a través de un puntero que contiene su dirección de memoria.

### Pregunta 17.
Cuando se usa un puntero para apuntar a un arreglo en C++, el puntero apunta inicialmente a la primera posición quiere decir que apunta a la primer dato guardado en el arreglo.
Para tener acceso a todos los datos se puede usar un bucle y con ayuda de un puntero ir recorriendo cada elemento del arreglo y así acceder a cada elemento.

### Pregunta 18.
Un puntero doble es empleado cuando se quiere un puntero que apunte a la dirección de memoria de otro puntero, son usados principalmente para matrices dinámicas, definir su tamaño, número de filas o número de columnas (o las dos) según sea necesario.
O también se pueden usar para arrays.

### Pregunta 19.
La instrucción break termina la instrucción de iteración saliendose completamente del bucle en el que se encuentra mientras que la instrucción continue no se sale directamente del bucle si no que pasa a la siguiente iteración del bucle actual.

### Pregunta 20
En este caso este fragmento de código se utiliza para compueba la no definición de un identificador.

### Pregunta 21.

El puntero "this" en C++ es una herramienta que solo está disponible dentro de las funciones miembro no estáticas class, struct y union. Este puntero apunta al objeto específico para el cual se invoca la función miembro. Es importante destacar que las funciones miembro estáticas no hacen uso del puntero "this".

### Pregunta 22.
La palabra clave nullptr representa un valor de puntero nulo. Use un valor de puntero nulo para indicar que el puntero no apunta a un objeto, el nullptr es preferido sobre el uso de cero o NULL para representar punteros nulos, ya que proporciona una indicación más clara.

### Pregunta 23.
La diferencia es que los arreglos son estructuras de datos estáticas, ya que hay que declarar su tamaño antes de utilizarlos y las listas son estructuras de datos que pueden ir creciendo conforme se vaya requiriendo, por eso se considera que es una estructura de datos dinámica.

### Pregunta 24.
Una función prototipo es una declaración de la función antes de su definición completa en un programa, especifica el nombre, el tipo, la clase de almacenamiento y otros atributos de la función. Para ser un prototipo, la declaración de función también debe establecer tipos e identificadores para los argumentos de la función, sirve para proporcionar información esencial al compilador antes de la definición completa de la función.

### Pregunta 25.
Una fuga de memoria o memory leak en inglés, es un error de software que ocurre cuando un bloque de memoria reservada no es liberada en un programa de computación. Comúnmente ocurre porque se pierden todas las referencias a esa área de memoria antes de haberse liberado.


1.
[Compilación, Linkado y Makefiles en C](https://pfctelepathy.wordpress.com/2015/05/11/intro-compilacion-linkado-y-makefiles-en-c/)
2.
[ProgramarYa](https://www.programarya.com/Cursos/C++)
3.
[microsoft](https://learn.microsoft.com/es-mx/docs/)
4.
[Tiposdedatosyvariables]https://programacblog.wordpress.com/tipos-de-datos-y-variables/

5.
[Academia](https://www.academia.edu/36644466/Tipos_de_datos_en_C)
6.
[Capítulo 2: Léxico de C. Tipos básicos de datos, visibilidad y almacenamiento.](https://ccia.ugr.es/~jfv/ed1/c/cdrom/cap2/cap25.htm)
7.
[Arreglos y Listas](https://repositorio-uapa.cuaieed.unam.mx/repositorio/moodle/pluginfile.php/1469/mod_resource/content/1/contenido/index.html)
8.
[Capítulo 6: Definición y uso de funciones.](https://ccia.ugr.es/~jfv/ed1/c/cdrom/cap6/cap62.htm#:~:text=Una%20variable%20global%20es%20aquella,y%20antes%20de%20cualquier%20funci%C3%B3n.)

9.
[Capítulo 6: Definición y uso de funciones.](https://www.geeksforgeeks.org/type-conversion-in-c/)

10.
[Bucle do - while](https://www2.eii.uva.es/fund_inf/cpp/temas/6_control_flujo_iterativo/do_while.html#:~:text=Es%20una%20variante%20especial%20del,ejecutar%C3%A1%20al%20menos%20una%20vez.)

11.
[21 Funciones IV: Sobrecarga](https://conclase.net/c/curso/cap21)






## PARTE TEORICA AUTOMATIZACION MAKEFILE

### Pregunta 1.
- CC: 
Es un programa para compilar programas en C, por defecto 'cc'.

- CFLAGS:
Banderas adicionales para darle al compilador de C y otras configuraciones específicas del compilador.

- CXXFLAGS:
Banderas adicionales para darle al compilador de C++, es similar a CFLAGS pero este solo aplica a C++.

- LDFLAGS:
Banderas adicionales para dar a los compiladores cuando se supone que deben invocar el enlazador, 'ld', como -L. -lfooEn su lugar , se deben agregar bibliotecas ( ) a la LDLIBSvariable.[1]

### Pregunta 2.

Una regla está compuesta por tres cosas: objetivos (normalmente uno), pre-requisitos o dependencias y recetas. Un objetivo es el archivo u orden que se quiere realizar. Los pre-requisitos son los archivos o reglas de las que dependen el objetivo, mientras que las recetas son las acciones que se siguen para obtener el objetivo.

### Pregunta 3.

Un "target" en un makefile se refiere al resultado final que se desea obtener, generalmente un archivo, estan asociados con sus pre-requisitos ya que los pre-requisitos son los archivos o acciones necesarios para construir el target. 

### Pregunta 4.

Bandera -I:Está bandera se utiliza para especificar que los agregados incluyen directorio de archivos de encabezado.

Bandera -c: Compila o ensambla los archivos fuente, pero no los enlaza.

Bandera -o:Especifica el archivo de salida.[3]

### Pregunta 5.
Se declaran de la formato(nombre = valor) y se utiliza con el simbolo dólar antes de la variable ejemplo: $(OBJECT): $(SOURCE) $(HEADER) g++ -Wall -g -I./include -c $(SOURCE) -o $(OBJECT)
Las variables facilitan la escritura y evitan repetir listas de palabras iguales en líneas distintas además de que gracias a su sintaxis simple es más fácil darle mantenimiento y actualización

### Pregunta 6.
El símbolo @ en un Makefile se utiliza para evitar imprimir el comando que se está ejecutando en ese momento, esto se hace para que el proceso de construcción se más legible. 


### Pregunta 7.
Esta variable se usa como objetivo de una regla sin recetas. Los pre-requisitos especificados en esa regla se ejecutan siempre que se realiza una orden que puede construirlos o que ejecuta estas reglas, sin importar que no se haya habido ninguna actualización desde la última vez que makefue ejecutado.
En otras palabras se usa para indicar a make que un objetivo no representa un archivo real, la sintaxis .PHONY se utiliza para indicarle a make que el objetivo no existe y que no debe buscar un archivo con ese nombre.[2]


1.
[10.3 Variables utilizadas por reglas implícitas](https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html#index-CFLAGS)

2.
[github](https://github.com/DGIIMUnderground/DGIIM1/blob/master/C1/FS/Apuntes/Practicas/Makefiles.md#variables-reservadas)

3.
[Guía de comandos de GCC: Cómo compilar código C en Linux](https://ioflood.com/blog/gcc-linux-command/#:~:text=The%20gcc%20command%20in%20Linux%20is%20used%20to%20compile%20C,This%20command%20compiles%20the%20'filename)