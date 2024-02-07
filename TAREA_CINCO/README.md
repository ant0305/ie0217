# Programa Analisis Datos y Uso de NumPy Python

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de python (python) y si es (python3) habria que modificar el Makefile
- Make

### Pasos para ejecutar los programas
1. Clona o descarga este repositorio en tu máquina local.
2. Abre una terminal en el directorio del proyecto y escriba make
esto ejecutara el programa.

## Descripción de los Proyectos

- El programa main permite hacer analisis de un grupo de datos extraidos de una pagina web, se hacen analisis ccomo el promedio, la desviacion estandar entre otros ademas que se hacen diferentes graficos para visualizar de forma mas sencilla el comportamiento de los datos asi como hacer comparaciones entre diferentes tipos de elementos.

## Estructura de los Proyectos

- `main.py`: Contiene todo el codigo necesario como para cumplir con el correcto analisis de los datos asi como la graficacion de diferentes grupos de elementos para facilitar la comprension de estos.
Tambien contiene una seccion en la cual se utiliza la libreria numpy para hacer algunas operaciones matematicas con un grupo de datos especifico.

## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!

# Interpretacion de resultados
- Estos datos muestran los viajes de los estadounidenses durante la epidemia de covid-19
## Primer grupo de datos
Transformaciones completadas:
     level       date          county  pop_stay_at_home  pop_not_stay_at_home  ...  trips_100_250  trips_250_500  week  trips_500  month
0  Condado 2019-01-01  Autauga County            9624.0               46245.0  ...         1592.0          322.0     0       95.0      1   
1  Condado 2019-01-02  Autauga County            7952.0               47917.0  ...         1393.0          289.0     0       67.0      1   
2  Condado 2019-01-03  Autauga County            8283.0               47586.0  ...         1322.0          247.0     0       42.0      1   
3  Condado 2019-01-04  Autauga County            8126.0               47743.0  ...         1311.0          326.0     0       45.0      1   
4  Condado 2019-01-05  Autauga County            8825.0               47044.0  ...         1622.0          311.0     0       42.0      1   


- Se confirma que los cambios que se hicieron previamente fueron exitosos.

## Segundo grupo de datos

Conteo de viajes por rango: {'1': 28190432.0, '1_3': 37729298.0, '3_5': 22038355.0, '5_10': 23492364.0, '10_25': 27191856.0, '25_50': 6466165.0, '50_100': 2268124.0, '100_250': 956334.0, '250_500': 218633.0, '500': 32253.0}

- En este grupo de datos se cuentan de cuantas millas fueron los viajes que realizaron las personas, claramente se observa que las personas realizaron menos viajes de una distancia 500 millas o mas, mientras que los viajes que mas realizaron fueron los 1 a 3 millas y los viajes de menos de una milla.

## Tercer grupo de datos

Descripcion general de los datos:
                      date  pop_stay_at_home  pop_not_stay_at_home          trips  ...  trips_250_500        week   trips_500       month
count                  731        731.000000            731.000000     731.000000  ...     731.000000  731.000000  731.000000  731.000000  
mean   2020-01-01 00:00:00       9080.917921          46788.082079  203261.031464  ...     299.087551   25.964432   44.121751    6.519836  
min    2019-01-01 00:00:00       6393.000000          41038.000000   91601.000000  ...       0.000000    0.000000    0.000000    1.000000  
25%    2019-07-02 12:00:00       7875.000000          45792.000000  169853.500000  ...     191.500000   13.000000   25.000000    4.000000  
50%    2020-01-01 00:00:00       8541.000000          47328.000000  192242.000000  ...     272.000000   26.000000   36.000000    7.000000  
75%    2020-07-01 12:00:00      10077.000000          47994.000000  238776.000000  ...     382.000000   39.000000   56.000000   10.000000  
max    2020-12-31 00:00:00      14831.000000          49476.000000  420320.000000  ...    1223.000000   52.000000  253.000000   12.000000  
std                    NaN       1562.713732           1562.713732   42159.354257  ...     148.553567   15.088373   30.067963    3.451913  

- En este grupo de datos se muestra la informacion general de los elementos del archivo csv.

- Se puede notar que el promedio de personas que salieron de viaje es mayor al promedio
de personas que se quedaron en casa.

- El minimo de personas que que se quedaron en casa fue de 6393, y el minimo de personas que salieron de casa fue de 41038.

- Se observa en los datos que el maximo de personas que salieron de casa fue de 14831 y el maximo de personas que salieron de casa fue de 49476.

## Cuarto grupo de datos

Promedio de viajes por rango de distancia:
trips_1: 38564.2024623803
trips_1_3: 51613.26675786594
trips_3_5: 30148.228454172367
trips_5_10: 32137.296853625172
trips_10_25: 37198.16142270862
trips_25_50: 8845.642954856361
trips_50_100: 3102.7688098495214
trips_100_250: 1308.2544459644323
trips_250_500: 299.0875512995896
trips_500: 44.12175102599179

- Este fragemento de codigo muestra por dia cual es el promedio de viajes que se realizaron, se observa que los viajes de 500 millas son los que tienen menos posibilidades de realizarse y los que mas tienen posibilidades de ocurrir son los de 1 a 3 millas.

## Quinto grupo de datos

Desviacion Estandar:
trips_1: Desviacion Estandar = 12750.64
trips_1_3: Desviacion Estandar = 12864.09
trips_3_5: Desviacion Estandar = 10901.55
trips_5_10: Desviacion Estandar = 9051.93
trips_10_25: Desviacion Estandar = 7501.40
trips_25_50: Desviacion Estandar = 1923.12
trips_50_100: Desviacion Estandar = 770.26
trips_100_250: Desviacion Estandar = 506.11
trips_250_500: Desviacion Estandar = 148.55
trips_500: Desviacion Estandar = 30.07

- En este fragmento de datos se puede observar los rangos con desviaciones estándar y esto se puede interpretar como que los rangos con desviacion estandar más altas indican una mayor variabilidad en la demanda de viajes, mientras que los rangos con desviaciones estándar más bajas indican una demanda más consistente.

## Sexto grupo de datos

Datos de movilidad para Autauga County:
Fecha: 2019-01-01, Poblacion en casa: 9624.0, Poblacion fuera de casa: 46245.0
Fecha: 2019-01-02, Poblacion en casa: 7952.0, Poblacion fuera de casa: 47917.0
Fecha: 2019-01-03, Poblacion en casa: 8283.0, Poblacion fuera de casa: 47586.0
Fecha: 2019-01-04, Poblacion en casa: 8126.0, Poblacion fuera de casa: 47743.0
Fecha: 2019-01-05, Poblacion en casa: 8825.0, Poblacion fuera de casa: 47044.0
Fecha: 2020-01-01, Poblacion en casa: 10980.0, Poblacion fuera de casa: 44889.0
Fecha: 2020-01-02, Poblacion en casa: 8763.0, Poblacion fuera de casa: 47106.0
Fecha: 2020-01-03, Poblacion en casa: 8046.0, Poblacion fuera de casa: 47823.0
Fecha: 2020-01-04, Poblacion en casa: 9372.0, Poblacion fuera de casa: 46497.0
Fecha: 2020-01-05, Poblacion en casa: 10049.0, Poblacion fuera de casa: 45820.0

- En este grupo de datos se muestran las estadisticas de las personas que se quedaron en casa y las que salieron de casa a inicios del 2019 mientras aun no existia una emergencia sanitaria y luego a mediados del 2020 cuando ya estaba la emergencia sanitaria se puede observar que las personas que permanecieron en sus casas aumentaron levemente aunque no se vio un aumento exponencial, de igual forma el numero de personas que salieron de sus casas disminuyo.

# Graficos

![Primer grafico](https://github.com/ant0305/ie0217/blob/main/Captura%20de%20pantalla%202024-02-04%20201417.png)

- En este grafico se puede observar que las personas viajaron menos en los meses finales del año exceptuando diciembre que hubo un repunte pero no muy importante como los viajes que se realizaron a mediados de año, comenzando con mayo que se reporto como el mes que mas viajaron las personas

![Segundo grafico](https://github.com/ant0305/ie0217/blob/main/Captura%20de%20pantalla%202024-02-04%20201541.png)

- En el segundo grafico se muestra las cantidades de personas que permanecieron en sus hogares cada mes, queda claro  que el mes en que mas personas estaban en sus hogares fue en diciembre y el mes en el que menos personas se quedaron en casa fue en febrero.

![Tercer grafico](https://github.com/ant0305/ie0217/blob/main/Captura%20de%20pantalla%202024-02-06%20104413.png)

- En este tercer grafico se hace una comparacion entre las personas que permanecieron en casa y las que salieron de casa claramente se ve que hay un mayor numero de personas que salieron de sus hogares a personas que se quedaron independientemente del mes.

![Cuarto grafico](https://github.com/ant0305/ie0217/blob/main/Captura%20de%20pantalla%202024-02-04%20201640.png)

- En este cuarto grafico se observa cual es el viaje que mas realizaron mas personas, como en el grupo de datos numero dos pero ahora en su representacion grafica para una mayor claridad.

# Parte teoria

## Pregunta 1.
Los iteradores son métodos que iteran colecciones como listas, tuplas, etc. 
Estos nos permiten recorrer un objeto iterable, es decir, son el objeto que nos permite obtener de un elemento iterable cada uno de los elementos que lo componen.[1]
Para implementar correctamente un objeto iterador en python se tienen que usar métodos especiales los cuales son, _iter() y __next_(), denominados colectivamente protocolo iterador.
El propósito de un iterador en python es la iteración mismo, la gran ventaja que poseen los iteradores en python es que cada elemento del iterador puede ser procesado de manera individual sin tener que cargar en memoria la estructura de datos en su totalidad.[2]
Esto es especialmente útil con grandes cantidades de datos ya que solo se carga un elemento a la vez.[2]

## Pregunta 2.
Los iteradores y los iterables en python son dos herramientas distintas pero que se relacionan y resultan útiles cuando se desea iterar sobre un flojo de datos o un contenedor.[2]
La diferencia está en que, mientras que un iterador es un objeto específico que implementa un iterador y se utiliza para recorrer un iterable. Los iterables ya tienen implementados metodos iteradores lo que permite la iteración a través de sus elementos.

## Pregunta 3.
Las excepciones en python son errores detectados en el programa durante la ejecución los que interrumpen el flujo normal del programa. Las excepciones no son necesariamente fatales hay formas de manejarlas para que el programa en dicho escenario no colapse completamente.[3]

## Pregunta 4.
El propósito de estas clausulas es directamente el manejo de errores. El propósito del try es en contener la parte del código la cual podría generar un error en caso de que no se presente un error el código continua su ejecución de forma normal, luego está la clausula except está se ejecuta en caso de que el error si suceda en este caso el except "atrapa" el error que podría generar el código en el try y muestra un mensaje personalizado el cual se define durante la programación.

## Pregunta 5.
La diferencia entre la clausula except y finally es que mientras except solo se ejecuta si la parte de código en el try da error la clausula finally se ejecuta sin importa si el fragmento de código en el try dió error o no.[4]
Este bloque usualmente se utiliza si queremos ejecutar algún tipo de acción de limpieza.[4]

## Pregunta 6.
Un generador es una función que produce una secuencia de valores de resultado en lugar de solo uno, lo que quiere decir que cada vez que se invoque la función nos dará un valor diferente al anterior.[5]
La ventaja frente a las listas es su eficiencia a la hora de manejar la memoria ya que los generadores no almacén toda su información en la memoria al mismo tiempo esto aumenta el rendimiento del generador.[6]

## Pregunta 7.
Para crear un generador usando la funcion yield se debe crear una función que contenga la sintaxis yield para esto se usa un formato similar al que se utiliza cuando se crea una funcion común la única diferencia es que en vez de agregar la palabra return se utiliza la sintaxis yield, ejemplo:
```py
# Codigo en python
def generador():
    n = 1
    yield n

    n += 1
    yield n

    n += 1
    yield n
```
[7]

## Pregunta 8.
Es más apropiado usar generadores en lugar de listas cuando se tiene una gran cantidad de datos y se necesita conservar memoria y maximizar el rendimiento.

## Pregunta 9.
La principal diferencia entre una serie y un DataFrame es que una serie es unidimensional y un DataFrame es bidimensional, se podría decir que un DataFrame está formado por varias series.

## Pregunta 10.
Para manejar valores nulos o faltantes la librería pnadas nos ofrece varias herramientas con este fin entre las que están:
La función isnull(), la cual devuelve una estructura con las mismas dimensiones pero en los espacios de los datos devuelve un True en caso de que estuviera vacío o un False en caso de que no es equivalente a isna[10], ejemplo:
```py
# Codgo en python
>>> array = np.array([[1, np.nan, 3], [4, 5, np.nan]])
>>> array
array([[ 1., nan,  3.],
       [ 4.,  5., nan]])
>>> pd.isna(array)
array([[False,  True, False],
       [False, False,  True]])
```
Luego está el método dropna el cual permite de una forma muy eficaz filtrar los datos que están vacios y dejar solo los valores no nulos[8], ejemplo:
```py
# Codigo en python
>>> df = pd.DataFrame({"name": ['Alfred', 'Batman', 'Catwoman'],
...                    "toy": [np.nan, 'Batmobile', 'Bullwhip'],
...                    "born": [pd.NaT, pd.Timestamp("1940-04-25"),
...                             pd.NaT]})
>>> df
       name        toy       born
0    Alfred        NaN        NaT
1    Batman  Batmobile 1940-04-25
2  Catwoman   Bullwhip        NaT
```
Después de aplicar el método dropna:
```py
# Codigo en python
>>> df.dropna()
     name        toy       born
1  Batman  Batmobile 1940-04-25
```
Después está el método fillna el cual permite sustituir los valores nulos de un estructura por otro valor según ciertos criterios, ejemplo:
```py
# Codigo en python
>>> df = pd.DataFrame([[np.nan, 2, np.nan, 0],
...                    [3, 4, np.nan, 1],
...                    [np.nan, np.nan, np.nan, np.nan],
...                    [np.nan, 3, np.nan, 4]],
...                   columns=list("ABCD"))
>>> df
     A    B   C    D
0  NaN  2.0 NaN  0.0
1  3.0  4.0 NaN  1.0
2  NaN  NaN NaN  NaN
3  NaN  3.0 NaN  4.0
```
[9]
Después de usar fillna:
```py
# Coodigo en python
>>> df.fillna(0)
     A    B    C    D
0  0.0  2.0  0.0  0.0
1  3.0  4.0  0.0  1.0
2  0.0  0.0  0.0  0.0
3  0.0  3.0  0.0  4.0
```
[9]

## Pregunta 11.
La función loc() es un método de selección de datos basado en etiquetas, lo que significa que tenemos que pasar el nombre de la fila o columna que queremos seleccionar en cambio iloc() utiliza índices enteros. Este método incluye el último elemento del rango pasado, a diferencia de iloc(). loc() puede aceptar datos booleanos a diferencia de iloc().[11]





1.
[Iterables e iteradores - Tutorial de Python](https://es.linkedin.com/learning/python-avanzado-18053873/iterables-e-iteradores#:~:text=En%20Python%2C%20los%20objetos%20iterables,Los%20iteradores%20son%20objetos.)

2.
[Iterators en Python: funcionalidad y uso de un vistazo](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/iterators-en-python/#:~:text=Los%20iterators%20de%20Python%20son,de%20programaci%C3%B3n%20para%20proyectos%20web.)

3.
[8. Errores y excepciones ¶](https://docs.python.org/3/tutorial/errors.html)

4.
[Excepciones en Python](https://ellibrodepython.com/excepciones-try-except-finally)

5.
[Generadores con Python](https://simuladorq.readthedocs.io/GeneradoresPython/)

6.
[Generador Vs Lista en Python](https://python.plainenglish.io/generator-vs-list-in-python-b8657c734ddc)

7.
[Generators en Python](https://ellibrodepython.com/yield-python)

8.
[pandas.DataFrame.dropna](https://pandas.pydata.org/docs/reference/api/pandas.DataFrame.dropna.html)

9.
[pandas.DataFrame.fillna](https://pandas.pydata.org/pandas-docs/version/1.5/reference/api/pandas.DataFrame.fillna.html)

10.
[pandas.isnull](https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.isnull.html)

11.
[Diferencia entre loc() e iloc() en Pandas DataFrame](https://www.geeksforgeeks.org/difference-between-loc-and-iloc-in-pandas-dataframe/)