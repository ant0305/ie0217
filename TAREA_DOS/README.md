# Biblioteca Virtual en C++

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de C++
- Make

### Pasos para ejecutar el programa
1. Clona o descarga este repositorio en tu máquina local.
2. Luego agrega el Makefile a la carpeta src
3. Abre una terminal en el directorio del proyecto.
4. Ejecuta el comando make para compilar el programa:
    ```
    make
    ```
5. Ejecuta el programa:
    ```
    ./my_programa.exe
    ```

## Descripción del Proyecto

la idea principal del proyectoes agilizar la busqueda de diferentes tipos de materiales 
en un recinto

## Estructura del Proyecto

- `main.cpp`: Contiene la función principal y la inicialización del programa
- `MaterialLectura.hpp`: Archivo(Base) de cabecera que declara la clase `MaterialLectura` y de otras.
- `MaterialLectura.cpp`: Contiene la implementación de las funciones de las clases.
- `MaterialAudiovisual.hpp`: Archivo(Base) de cabecera que declara la clase `MaterialAudiovisual` y de otras.
- `MaterialAudiovisual.cpp`: Contiene la implementación de las funciones de las clases.
- `MaterialOrdenado.hpp`: Archivo de cabecera que declara la clase `MatereialOrdenado` y hereda de las clases bases.
- `MaterialOrdenado.cpp`: Contiene la implementación de las funciones de las clases.
- `MaterialPrecio.hpp`: Archivo de cabecera que declara la clase `MatereiaPrecio` y hereda de las clases bases.
- `MaterialPrecio.cpp`: Contiene la implementación de las funciones de las clases.
## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!


# Parte teoria

## Pregunta 1.
Conceptos fundamentales:
Se define como un paradigma de la programación, una manera de programar específica, donde se organiza el código en unidades denominadas clases, de las cuales se crean objetos que se relacionan entre sí para conseguir los objetivos de las aplicaciones.[1]
En otras palabras es una forma de programar especial la cual tiene más similitudes con los problemas que se dan en la vida real, que permite diseñar mejores aplicaciones llegando a ser más complejas pero sin caer en lo inmanejable.

Principios fundamentales:
- Clase: Una clase es una plantilla que define el estado y comportamiento de cierto tipo de objeto, esta plantilla se crea para facilitar la creacion de objetos, se puede pensar como una coleccion de variables (atributos o propiedades) y funciones (metodos) que perminten representar un conjunto de datos.

- Objeto: Es una instacia de una clase, es decir una entidad que se construye apartir de de los datos que se encuentran almacenados en la clase. Por tanto, un  objeto se puede describir como aquel ente el cual necesita de una clase para poder existir ya que esta la provee de un conjunto de propiedades y atributos.

- Metodo: Los metodos se les puede identificar como las funciones que sirven para manipular las variables de la clase, un metodo puede producir cambios en las propiedades de un objeto.

- Propiedad o atributo: Son datos de distinto tipo que sirven para describir el estado actual de un objeto en esa clase, cuyo valor puede ser alterado por la ejecucion de algun metodo.

## Pregunta 2.
- Herencia:
La herencia permite que se defina una jerarquía de clases las cuales son capaces de poder compartir atributos y métodos para que puedan ser reutilizados y asi no tener que estar haciendo codigo repetitivo ademas asi es posible mantener el coodigo mas simple.[2]

Ejemplo:
```cpp
//Codigo en c++
#include <iostream>
using namespace std;

class Vehiculo {
public:
    Vehiculo(const char* marca, const char* modelo) : marca(marca), modelo(modelo) {}

protected:
    const char* marca;
    const char* modelo;
};

class Carro : public Vehiculo {
public:
    Carro(const char* marca, const char* modelo, int puertas) : Vehiculo(marca, modelo), puertas(puertas) {}

    void obtenerInformacion() {
        cout << "Marca y modelo del carro: " << marca << " " << modelo << endl;
        cout << "Puertas del carro: " << puertas << endl;
    }

private:
    int puertas;
};

int main() {
    
    Carro miCarro("Toyota", "Corolla", 4);

    miCarro.obtenerInformacion();

    return 0;
}
```
## Pregunta 3.
El encapsulamiento en la programación orientada a objetos consiste en la capacidad de ocultar los detalles internos de un objeto y exponer solo los necesarios. Se logra definiendo atributos como privados o protegidos.
Es importante porque permite garantizar la integridad de los datos contenidos en el objeto, si queremos proteger la información contra modificaciones inesperadas debemos recurrir al principio de encapsulación.
Ejemplos:
```cpp
//Codigo en c++
#include <iostream>
#include <string>

class Comida {
private:
   
    std::string nombre;
    Int precio;  

public:
 
    Comida(std::string _nombre, int _precio) : nombre(_nombre), precio(_precio) {}

   
    void mostrarDetalles() const {
        std::cout << "Comida: " << nombre << ", Precio: $" << precio << std::endl;
    }

    void aplicarDescuento(double porcentajeDescuento) {
        if (porcentajeDescuento > 0 && porcentajeDescuento <= 100) {
            precio -= (precio * porcentajeDescuento / 100.0);
            std::cout << "Descuento aplicado. Nuevo precio: $" << precio << std::endl;
        }
    }
};

int main() {
 
    Comida hamburguesa("Hamburguesa", 5);
    hamburguesa.mostrarDetalles();

    hamburguesa.aplicarDescuento(10);

    return 0;
}
```
## Pregunta 4.
Polimorfismo:
El polimorfismo nos permite diseñar objetos que pueden tener varios comportamientos, esto nos permite que sin alterar el código ya existente se puedan incorporar nuevos comportamientos y fundamentos para así ir actualizandolo.[2]
Polimorfismo de tipo: Se usa cuando se busca un codigo mas generico permitiendo que las diferentes clases sean tratadas de manera uniforme
```cpp
//Codigo en c++
#include <iostream>

class Animal {
public:
    virtual void hacerSonido() const {
        std::cout << "Sonido de animal" << std::endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() const override {
        std::cout << "Guau" << std::endl;
    }
};

int main() {
    Perro miPerro;
    const Animal& animal = miPerro;  
    animal.hacerSonido();

    return 0;
}
```
Polimorfismo de operador: Se utiliza cuando se necesita sobrecargar algun operador para que haga algo en especifico en una clase respectiva
```cpp
//Codigo en c++
#include <iostream>

class Sumador {
public:
    Sumador operator+(const Sumador& otro) const {
        Sumador resultado;
        resultado.valor = this->valor + otro.valor;
        return resultado;
    }

    void mostrarValor() const {
        std::cout << "Valor: " << valor << std::endl;
    }

private:
    int valor = 0;
};

int main() {
    Sumador a, b, c;
    c = a + b; 
    c.mostrarValor();

    return 0;
}
```
## Pregunta 5.
La abstracción está íntimamente relacionada con la programación orientada a objetos ya que la abstracción se logra con la creación de clases  y la implementación de métodos, propiedades que representan las características y comportamientos de un concepto abstracto.
Ejemplo 1:
```cpp
//
#include <iostream>
using namespace std;
  
class implementAbstraction
{
    private:
        int a, b;
  
    public:
      
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};

int main() 
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
```
[3]

Ejemplo 2
```cpp
//Codigo en c++
#include <iostream>

class CuentaBancaria {
public:
    CuentaBancaria(const char* titular, double saldo) : titular(titular), saldo(saldo) {}

    void mostrar() const {
        std::cout << titular << ": $" << saldo << std::endl;
    }

    void depositar(double cantidad) {
        saldo += cantidad;
        mostrar();
    }

private:
    const char* titular;
    double saldo;
};

int main() {
    CuentaBancaria cuenta("Juan", 1000.0);
    cuenta.mostrar();
    cuenta.depositar(500.0);
    return 0;
}
```
## Pregunta 6.
La diferencia entre una clase y un objeto es que la clase es la encargada de crear los objetos, siendo está una plantilla la cual llama el método constructor para crear el objeto.
Ejemplo clase:
```cpp
//Codigo en c++
#include <iostream>

class Coche {
public:
    const char* modelo;
    int anio;

    void acelerar() {
        std::cout << "Acelerando el coche." << std::endl;
    }
};
```
Ejemplo objeto:
```cpp
//Codigo en c++
int main() {
    Coche miCoche{"Sedan", 2022};
    miCoche.acelerar();

    return 0;
}
```
## Pregunta 7.
Las funciones virtuales permiten que clases derivadas de una misma base (clases hermanas) puedan tener diferentes versiones de un método. Se utiliza la palabra-clave virtual para avisar al compilador que un método será polimórfico y que en las clases derivadas existen distintas definiciones del mismo para que no las ignore.[4]
Para utilizarlas hay que seguir una serie de pasos:
1. Declaración en la clase base, se declara el método que deseamos que sea virtual colocando la palabra clave virtual antes del método.
2. Redefinición en la clase derivada, se redefine el método virtual en las clases derivadas esto se logra declarando el mismo método con la misma firma.
3. Uso del polimorfismo atravez de punteros y referencias de la clase base que apunte a un objeto de la clase derivada.
4. Se usa un destructor virtual para garantizar la correcta liberación de los recursos.

## Pregunta 8.
El constructor es el encargado de moldear un objeto cuando esté se inicializa y el destructor es el encargado de destruirlo cuando esté termina finaliza su función para liberar los recursos que estaban siendo utilizados
Ejemplo 1:
```cpp
//Codigo en c++
#include <iostream>

class Persona {
public:
    Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {
        std::cout << "Se ha creado una persona llamada " << nombre << "." << std::endl;
    }

    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " años." << std::endl;
    }

    ~Persona() {
        std::cout << "Se ha destruido la persona llamada " << nombre << "." << std::endl;
    }

private:
    std::string nombre;
    int edad;
};

int main() {
    Persona persona1("Juan", 25);
    persona1.mostrarInformacion();
    return 0;
}
```
Ejemplo 2:
```cpp
//Codigo en c++
#include <iostream>

class Vehiculo {
public:
    Vehiculo(const std::string& marca, int anio) : marca(marca), anio(anio) {
        std::cout << "Se ha creado un vehículo de marca " << marca << " del año " << anio << "." << std::endl;
    }

    void mostrarDetalles() const {
        std::cout << "Marca: " << marca << ", Año: " << anio << "." << std::endl;
    }

    ~Vehiculo() {
        std::cout << "Se ha destruido un vehículo de marca " << marca << "." << std::endl;
    }

private:
    std::string marca;
    int anio;
};

int main() {
    Vehiculo auto1("Toyota", 2022);
    auto1.mostrarDetalles();
    return 0;
}
```
## Pregunta 9.
Los operadores sobrecargados son aquellos operadores a lo cuales se le ha dado más de una propiedad, es una forma de extender las operaciones disponibles para los objetos de una clase.[5]
Por ejemplo en el siguiente código se está sobrecargando el operador suma:
```cpp
//Codigo en c++
class Pareja {
public:
    double a, b;

    // Constructor parametrizado
    Pareja(const double a, const double b) : a(a), b(b) {}

    // Sobrecarga del operador +
    Pareja operator+(const Pareja& otro) const {
        return Pareja(a + otro.a, b + otro.b);
    }
};

int main() {
    Pareja A(50, 75);
    Pareja B(150, 175);
    Pareja C = A + B;

    // Muestra los resultados
    std::cout << "A: " << A.a << ", " << A.b << std::endl;
    std::cout << "B: " << B.a << ", " << B.b << std::endl;
    std::cout << "C: " << C.a << ", " << C.b << std::endl;

    return 0;
}
class Pareja {
public:
    double a, b;

    // constructor parametrizado
    Pareja(const double a,const double b)
    {
        this->a = a;
        this->b = b;
    }
};

int main()
{
    Pareja A(50, 75 );
    Pareja B(150, 175 );
    Pareja C = A + B;

    return 0;
}
```
## Pregunta 10.
Una plantilla es una forma especial de escribir un código genérico para que este sea capaz de recibir todo tipo de datos arbitrarios.[6]
Ejemplo:
```cpp
//Codigo en c++
#include <iostream>

template <typename T>
void mostrarDato(T dato) {
    std::cout << "Dato: " << dato << std::endl;
}

int main() {
    mostrarDato(42);        // Utilizando la plantilla con un entero
    mostrarDato(3.14);      // Utilizando la plantilla con un número decimal
    mostrarDato("Hola");    // Utilizando la plantilla con una cadena de texto

    return 0;
}
```
## Pregunta 11. 
Es un lugar apartado llamado (heap) en el que se puede reservar una parte de la memoria la cual puede ir variando a lo largo del tiempo a diferencia de la memoria estática que no tiene está característica, aunque cabe recalcar que una vez finalizada la ejecución del programa es necesario liberar la memoria.
Se utiliza normalmente cuando se van a usar estructuras de datos cuyos tamaños pueden variar como por ejemplo:
Arreglos dinámicos, matrices dinámicas, objetos dinámicos entre otros.

## Pregunta 12.
Entre new y malloc hay una gran cantidad de diferencias entre las que se encuentran:
Que malloc es una característica del lenguaje C, mientras que new es una característica fundamental de C++. Malloc es esencialmente una función estándar, mientras que new es un operador. Malloc no debe usarse en C++ sin una razón esencial.[7]
- New se puede usar cuando se necesita una interfaz más segura y fácil de usar al garantizar que se llama al constructor del objeto, además es preferible usar new en código moderno de c++.[7]
- Malloc puede ser útil cuando se trabaja en C ya que el operador new no existe en ese lenguaje, además malloc puede ser usado cuando no se requiere llamar al constructor.[7]

## Pregunta 13.
Una fuga de memoria o (memory leak) en inglés se da cuando los programadores reservan un espacio de memoria en el "heap" y se le olvida liberar ese espacio de memoria cuando ya no se necesita.[8]
Para evitar las juegas de memoria se pueden utilizar punteros inteligentes, ser ordenados a la hora de programar y si no es estrictamente necesario no reservar memoria en el "heap".

## Pregunta 14.
En C++ un puntero inteligente es una plantilla la cual gracias a la sobrecarga de operadores ofrece una funcionalidad de puntero además de que entre sus características estan la de permitir la gention de memoria de forma más segura.[10]
Ejemplo 1.
```cpp
//Codigo en c++
void UseRawPointer()
{
    // Using a raw pointer -- not recommended.
    Song* pSong = new Song(L"Nothing on You", L"Bruno Mars"); 

    // Use pSong...

    // Don't forget to delete!
    delete pSong;   
}

void UseSmartPointer()
{
    // Declare a smart pointer on stack and pass it the raw pointer.
    unique_ptr<Song> song2(new Song(L"Nothing on You", L"Bruno Mars"));

    // Use song2...
    wstring s = song2->duration_;
    //...

} // song2 is deleted automatically here.
```
[9]
- Ejemplo 2.
```cpp
//Codigo en c++
class LargeObject
{
public:
    void DoSomething(){}
};

void ProcessLargeObject(const LargeObject& lo){}
void SmartPointerDemo()
{    
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Pass a reference to a method.
    ProcessLargeObject(*pLarge);

} //pLarge is deleted automatically when function block goes out of scope.
```
[9]

## Pregunta 15.
Tanto delete como delete[] son operadores que se utilizan para liberar memoria la diferencia radica en que uno se utiliza a la hora de eliminar variables únicas(delete var;) y el otro se utiliza a la hora de eliminar arrays(delete[] arreglo;).[11]
## Pregunta 16.
Un algoritmo de ordenamiento es un conjunto de instrucciones lógicas creado para ordenar una serie de datos en la mayoría de casos de forma ascendente o descendente.
Son importantes porque ayudan a la legibilidad del código, favorecen el mantenimiento y a la actualización del código.

## Pregunta 17.
Bubble Sort es el algoritmo de ordenamiento mas sencillo que se puede encontrar el cual consiste en la comparación entre dos números consecutivos dónde se va eligiendo el número mayor hasta llevarlo al final de la lista y así sucesivamente hasta completar la totalidad de la cantidad de datos.
El algoritmo no es recomendable para grandes conjuntos de datos ya que su complejidad temporal promedio es bastante alta, la mayor posible ocurre cuando inicialmente la lista está ordenada en orden inverso y es la siguiente:
Complejidad temporal: O(N^2 )

## Pregunta 18.
Quicksort es un algoritmo de clasificación el cual usa la técnica de divide y vencerás.
Este algoritmo de clasificación lo que hace es elegir un pivote( hay diferentes formas en las que elige este pivote, desde elegir el último dato como pivote hasta elegir uno aleatorio) y luego divide los elementos en dos conjuntos los números mayores a este y los números menores y después organiza las dos subconjuntos que se crearon menores y mayores al pivote.[12]
Su ventaja principal es que suele ser muy eficiente, sin embargo en el peor de los casos es un O(N^2).[12]
Otra ventaja es que tiene una sobrecarga baja ya que solo requiere una pequeña cantidad de memoria para funcionar.[12]

## Pregunta 19.
Los algoritmos inestables pueden cambiar el orden de registro con claves iguales en cambio los algoritmos estables nunca cambian registros con claves iguales.
Bubble Sort es un ejemplo de algoritmo estable ya que no cambia los registros con claves iguales y un ejemplo de algoritmo inestable sería Quicksort ya que se si puede tener intercambios de claves con datos iguales.

## Pregunta 20.
Merge Sort al igual que Quicksort es un algoritmo de clasificación el cual usa la técnica de divide y vencerás dividiendo la matriz en dos partes y luego se llama así mismo para las dos mitades y después fusiona las dos mitades ordenadas.
Su complejidad temporal es: O(n log(n))
Es útil para ordenar listas vinculadas en tiempo, además de problema de conteo de inversiones y utilizada en clasificación externa.



1.
[Qué es la programacion orientada a objetos](https://desarrolloweb.com/articulos/499.php)

2.
[Principios Básicos de la POO](https://ecosistema.buap.mx/forms/files/dspace-23/1_principios_bsicos_de_la_poo.html)

3.
[Abstracción en C++](https://barcelonageeks.com/abstraccion-en-c/)

4.
[Métodos virtuales](https://baulderasec.wordpress.com/programando-2/programacion-c-por-la-practica/capitulo-xi/metodos-virtuales/#:~:text=En%20resumen%2C%20los%20m%C3%A9todos%20virtuales,del%20tipo%20real%20del%20objeto.)

5.
[OPERADORES SOBRECARGADOS](http://agora.pucp.edu.pe/inf2170681/25.htm)

6.
[Plantillas (C++)](https://learn.microsoft.com/es-es/cpp/cpp/templates-cpp?view=msvc-170)

7.
[Malloc vs New: diferencia y comparación](https://askanydifference.com/es/difference-between-malloc-and-new-with-table/)

8.
[Malloc vs New: diferencia y comparación](https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/)

9.
[Punteros inteligentes (C++ moderno)](https://learn.microsoft.com/es-es/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170)

10.
[Del curso: C++: Punteros inteligentes](https://es.linkedin.com/learning/c-plus-plus-punteros-inteligentes/por-que-usar-punteros-inteligentes)

11.
[delete (Operador) (C++)](https://learn.microsoft.com/es-es/cpp/cpp/delete-operator-cpp?view=msvc-170)

12.
[QuickSort: tutoriales sobre algoritmos y estructura de datos](https://www.geeksforgeeks.org/quick-sort/)
