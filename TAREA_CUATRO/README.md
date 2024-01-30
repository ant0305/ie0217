# Programa Alergias Python

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de python (python3) y si es (python) habria que modificar el Makefile
- Make

### Pasos para ejecutar los programas
1. Clona o descarga este repositorio en tu máquina local.
2. Abre una terminal en el directorio del proyecto y escriba make
esto ejecutara el menu del programa

## Descripción de los Proyectos

- El programa de alergias permite al usuario ingresar una nueva alergia al sistema
tambien permite al usuario ingresar las alergias que padese y despues hacer distintos
calculos apartir de esos datos ademas el programa cuenta con herramientas de 
rendimiento para examinar la funcionalidad del codigo.

## Estructura de los Proyectos

- `main.py`: Contiene la interfaz del usuario que permite interartuar de 
distintas maneraas con el usuario
- `alergias.py`: Contiene todas las clases(metodos y atributos) necesarios para 
que el codigo funcione de forma optima.
## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!

# Resumen del rendimiento del codigo
- Antes de agregar todas las alergias al diccionario cuando se mostro en la terminal el total del tiempo registrado fue de 0.000 segundos, luego cuando se agregaron el resto de alergias el tiempo cambio a 0.004 segundos el resto de codigo no mostro grandes cambios de rendimeinto ademas de esto tambien se observo que la mayor parte del tiempo se gasto en los inputs a la hora de esperar al que usuario ingrese los datos. 
# Parte teoria

## Pregunta 1.
La diferencia entre una lista y una tupla es que la tupla es estático osea no puede ser modificada directamente una vez creada, en cambio la lista si puede ser modificada por ejemplo añadiéndole elementos con el método append.

## Pregunta 2.
Es una herramienta que nos ofrecen algunos lenguajes de programación para poder usar los operadores estándar como +,-,*, / en las clases personalizadas.
Para utilizar la sobrecarga de operadores en python se deben definir cómo métodos en las clases, algunos ejemplos son:
1. _add_ para la suma 
2. _sub_ para la resta 
3. _mul_ para la multiplicación 
4. _truediv_ para la división
[1]
## Pregunta 3.
El alcance(scope) se refiera al rango de uso de una variable para que está sea válida y poder ser utilizada.
Existen varios de scope según la variable, por ejemplo están las variables locales las cuales son las que se inicializan dentro de una función y son exclusivas de esa función, juegos están las variables globales que son las que se definen y declaran fuera de cualquier función y no son propias de ninguna función en específico.[2]

## Pregunta 4.
Un decorar es una función que se utiliza para cambiar o extender el comportamiento de otra función sin la necesidad de modificar la función original en si.
Su funcion principal es la de añadir diferentes características a las funciones ya existentes esto permite la reutilización de código, lo que ayuda a mantener el código más limpio, más robusto, fácil de mantener y actualizar.

## Pregunta 5.
Para gentionar los errores en python se usan una serie de sintaxis especiales como son el try el except y opcionalmente el finally estos bloques permiten manejar los errores durante la ejecución a lo que popularmente se le llama (fallar con estilo).[3]
Ejemplos de uso de estos bloques:
### try:
```py
# Codigo en python
while True:
    try:
        x = int(input("Please enter a number: "))
        break
    except ValueError:
        print("Oops!  That was no valid number.  Try again...")
```
### except:
```py
# Codigo en python
except (RuntimeError, TypeError, NameError):
     pass
```
### finally:
```py
try:
    raise KeyboardInterrupt
finally:
    print('Goodbye, world!')
```

## Pregunta 6.
Son funciones las cuales son fáciles de implementar pero algo difíciles de entender, se usan para generar valores iterables de forma eficiente uno a la vez en lugar de crear un lista de memoria, en otras palabras permite crear elementos iteradores de otra manera la cual utiliza una sintaxis yield para hacer esto.[4]

## Pregunta 7.
La diferencia entre _init_ y _call_ en el contexto de python es que el primero(_init) es el constructor de la clase y se llama automáticamente al crear una instancia su funcion principal es inicializar los atributos y configuraciones iniciales de la instancia por otro lado el segundo método (call_) se utiliza para implementar un operador de llamada de función cuando se usa la instancia seguida de dos paréntesis.[5]

## Pregunta 8.
Un módulo es un archivo de python cuyos objetos están organizados como  (funciones, clases, excepciones, etc.) pueden ser accedidos desde otro archivo. Se trata simplemente de una forma de organizar grandes códigos. Para que tenga mayor legible y sea más fácil de mantener y actualizar.[6]
Y los paquetes son carpetas que están organizadas por uno o varios módulos y un archivo especial llamado _init_.py este archivo se utiliza para que python entienda que se trata de un paquete y no de una simple carpeta.[6]

## Pregunta 9.
La diferencia entre un append () y un extend() es que el append puede agregar cualquier tipo de datos al final de la lista a diferencia de extend() que solo agrega datos que sean iterables.[7]

## Pregunta 10.
La diferencia entre métodos de clase y métodos estaticos es que los métodos de clase son declarados en un clase y los métodos estaticos no aunque los métodos estaticos si pueden ser utilizados adentro de la clase como los métodos de clase sin embargo estos no pueden utilizar los atributos que se declaran adentro de la clase ni métodos.[8]

## Pregunta 11.
La herencia simple tiene lugar cuando una clase hija hereda los atributos de una única clase padre, mientras que la herencia multiple pasa cuando una clase hija hereda atributos de varias clases padre

## Pregunta 12.
Los errores de importación de archivos en python se manejan con la sintaxis con la que se manipulan todos los errores la cual es encerrando la línea en la que se está intentando importar el módulo con un try, except.
Con este método podremos proporcionar un mensaje de error o otro archivo de respaldo si es el caso.

## Pregunta 13.
La diferencia entre una clase y un objeto es que la clase se podría decir que es como una plantilla para hacer objetos mientras que el objeto es una instancia de la clase.

## Pregunta 14.
Las clases abstractas son clases que no pueden ser instanciadas directamente si no que solo pueden usarse para heredar implementacion abstractas a clases hijas mientras que las interfaces se logran mediante el uso de clases abstractas que definen métodos abstractas que pueden ser integrados por las clases que heredan ellas.[9]

## Pregunta 15.
Sobreescritura de métodos se refiere a la posibilidad que tiene una clase hija de tener un método con el mismo nombre que el de la clases padre pero definiendole comportamientos diferentes.
Y se logra haciendo en la clase hija un método del mismo nombre que el encontrado en la clase padre y luego llamando a ese método con la sintaxis súper() y después se puede proceder con su modificación.


1.
[SOBRECARGA DEL OPERADOR DE PYTHON](https://www.cosmiclearn.com/lang-es/python-overload.php)

2.
[Alcance de variables de Python](https://www.geeksforgeeks.org/python-scope-of-variables/)

3.
[8. Errores y excepciones¶](https://docs.python.org/es/3/tutorial/errors.html)

4.
[Generators](https://www.learnpython.org/es/Generators#google_vignette)

5.
[__init__ frente a __call__ en Python￼](https://www.supplychaindataanalytics.com/es/wiki-python-es/__init__-frente-a-__call__-en-python%EF%BF%BC/#:~:text=En%20Python%2C%20se%20llama%20a,operador%20de%20llamada%20de%20funci%C3%B3n.)

6.
[Módulos y paquetes](https://tutorial.recursospython.com/modulos-y-paquetes/)

7.
[5. Estructuras de datos¶](https://docs.python.org/es/3/tutorial/datastructures.html)

8.
[Tipos de Métodos de clase en Python](https://pywombat.com/articles/tipos-metodos-python#:~:text=Ver%C3%A1s%2C%20este%20tipo%20de%20m%C3%A9todos,clase%20ni%20a%20sus%20m%C3%A9todos.)

9.
[Clases abstractas, interfaces y polimorfismo](https://atareao.es/pyldora/clases-abstractas-interfaces-y-polimorfismo/)