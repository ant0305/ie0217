# Programa Analisis Datos(Clustering y Regresiones)

## Instrucciones de Ejecución con Makefile

### Requisitos
- Compilador de python (python) y si es (python3) habria que modificar el Makefile
- Make

### Pasos para ejecutar los programas
1. Clona o descarga este repositorio en tu máquina local.
2. Agrega el archivo kaggle.json a esta direccion en su computadora "C:\Users\usuario\.kaggle"
2. Abre una terminal en el directorio del proyecto y escriba make
esto ejecutara el programa.

## Descripción de los Proyectos

- El programa permite hacer analisis de un grupo de datos extraidos de una pagina web de forma automatica, se trabajan los datos para que su posterior uso sea mas sencillo y despues con la ayuda de dos archivos (clustering.py y regression.py) se hacen dos graficos de regresiones tanto lineales como no lineales ademas de esto tambien se evalua el rendimiento de cada modelo utilizando metricas, luego de esto se usan agrupamientos para unir diferentes elementos los cuales comparten alguna caracteristica y se el rendimeinto de ambos graficos tambien. 

## Estructura de los Proyectos

- `main.py`: Contiene todo el codigo necesario como para cumplir con el correcto analisis de los datos asi como la graficacion de diferentes grupos de elementos para facilitar la comprension de estos gracias a las regresiones aplicadas tambien cuenta analisis de clustering para buscar patrones en los datos del archivo .csv
tambien cada uno de los graficos cuenta con su respectiva evaluacion de rendimiento.

`__init__.py`: Este archivo vacio indica a Python que el directorio cars_analysis
debe ser tratado como un paquete Python.

`regression.py`: Posee las implementaciones de los modelos de regresion lineal
y no lineal que se utilizaran en el del archivo csv.

`clustering.py`: Contiene las implementaciones de algoritmos de
clustering, que se utilizaron para elaborar los diferentes clusters en el main.

## Contribuciones y Mejoras

Si tienes sugerencias o encuentras errores, ¡no dudes en contribuir abriendo un issue o enviando un pull request!


# Parte teoria

## Pregunta 1.
La regresión lineal es una técnica estadística de análisis que permite modelar y analizar la relacion que existe entre una variable dependiente y una o más independientes.[1]
En la forma más simple asume una relación lineal entre estás variables(dependiente e independientes) y busca encontrar una línea recta que mejor se adapte a los datos observados.[1]
La diferencia con la regresión no lineal es que a diferencia de las regresiones lineales que están restringidas a estimaciones de modelos lineales, la regresión no lineal puede estimar modelos con relaciones arbitrarias entre las variables dependientes e independientes.

## Pregunta 2.
Los coeficientes de regresión son los valores asociados que multiplican a las variables independientes en una ecuación de regresión.
Los coeficientes de regresión representan el cambio medio en la variable de respuesta(dependiente) para una unidad de cambio en la variable predictora(independiente) mientras se mantienen constantes los otros predictores presentes en el modelo.[2]

## Pregunta 3.
El error cuadratico medio(MSE) es una métrica que calcula el promedio de los errores cuadrados entre las predicciones y valores reales, se utiliza para evaluar la precision de un modelo de regresión.
Se utiliza elevando al cuadrado la diferencia entre el valor predicho y el valor real y promediando el conjunto de datos.
Aqui un ejemplo de como se puede implementar en python:
```python
# Coodigo en python
from sklearn.metrics import mean_squared_error
mse = mean_squared_error(
    y_true= y_test,
    y_pred = predicciones)
print(mse)
```
[3]
## Pregunta 4.
En la regresión simple se analiza la relación entre una variable dependiente y una variable independiente. Por ejemplo, podríamos estudiar cómo la cantidad de horas de estudio (variable independiente) se relaciona con el puntaje obtenido en un examen (variable dependiente). En la regresión lineal múltiple, se estudia la relación entre una variable dependiente y dos o más variables independientes; lo cual permite tener en cuenta múltiples factores que podrían influir en la variable dependiente.[1]
Y cada una se utiliza dependiendo del datos con los que haya que lidiar ejemplo si los datos tienen una variable dependiente y una independiente se hace una regresión lineal simple si los datos tienen una variable dependiente y varias independientes se hace una regresión lineal múltiple.
## Pregunta 5.
El clustering también conocido como agrupación, es una técnica que tiene como objetivo dividir un conjunto de datos en grupos o clusters basándose en la similitud entre los elementos. Su objetivo principal en el analisis de datos es buscar o identificar que patrones siguen el conjunto de datos que se está estudiando sin necesidad de etiquetas predefinidas esto con el propósito de buscar relaciones entre las variables y comprender mejor la estructura de los datos.
## Pregunta 6.
Kmeans es un algoritmo de agrupamiento basado en el centroide o en la partición.
Función del algoritmo:
Los centroides K se colocan aleatoriamente, uno para cada grupo.
Se calcula la distancia de cada punto desde cada centroide
Cada punto de datos se asigna a su centroide más cercano, formando un grupo.
Se recalcula la posición de los K centroides.[4]
Por otro lado DBSCAN es un algoritmo de agrupamiento basado en la densidad y puede detectar los clusters de forma arbitraria sino necesidad de especificar un número de clusters de antemano.
Funciona del algoritmo:
Se determina el tipo de cada punto. Cada punto de datos en nuestro conjunto de datos puede ser cualquiera de los siguientes:
Punto central: un punto de datos es un punto central si hay al menos M puntos en su vecindad, es decir, dentro del radio especificado (R).
Punto fronterizo: un punto de datos se clasifica como punto FRONTERIZO si:
Su vecindad contiene menos de M puntos de datos, o
Es accesible desde algún punto central, es decir, está dentro de la distancia R desde un punto central.
Punto atípico: un punto atípico es un punto que no es un punto central y, además, no está lo suficientemente cerca como para ser accesible desde un punto central.
Los puntos atípicos se eliminan.
Los puntos centrales que son vecinos se conectan y se colocan en el mismo grupo.
Los puntos fronterizos se asignan a cada grupo.[4]

## Pregunta 7.
La inercia en el contexto de clustering es la suma de las distancias al cuadrado de cada punto a su centroide.[5]
La inercia se utiliza para evaluar la calidad de un agrupamiento en el sentido de que cuando se usa el método del codo los clusters ideales se eligen observando el gráfico y notando el punto en el que la inercia deja de disminuir rápidamente formando un codo en la gráfica he de ahí su nombre.

## Pregunta 8.
Los centroides son puntos representativos en el espacio que se utilizan en el método Kmeans para definir los clusters, cuando se configura un modelo de agrupación en clústeres mediante el método K-means se debe especificar un número de destino k que indica el número de centroides que desee en el modelo.[6]
Los centroides en el algoritmo K-Means se utilizan como punto de partida para los clusters y se aplica el algoritmo de Lloyd para refinir sus ubicaciones de manera iterativa.[6]

## Pregunta 9.
La diferencia está en que los datos estructuras son datos que siguen modelos predefinidos y son fáciles de analizar el formato en el que se encuentran se presta para esto, en cambio los datos no estructurados no siguen modelos predefinidos esto hace que su análisis sea mucho más difícil además de que generalmente son en binarios.[7]

## Pregunta 10.
Un paquete es una colección de módulos relacionados organizados en un directorio para permitir una mayor modularidad y reutilización de código.
La diferencia esta en que un módulo es un archivo de Python cuyos objetos (funciones, clases, excepciones, etc.), y un paquete seria una carpeta que contiene varios módulos.[8]

## Pregunta 11.
La función del archivo _init_.py es indicarle al intérprete de Python que el directorio contiene un módulo, y que debe tratarlo como tal (es decir, hacer que sea posible importar los archivos como parte del módulo).[9]

## Pregunta 12.
Los módulos en Python son simplemente archivos Python con la extensión .py, que implementa un conjunto de funciones. Los módulos son importados desde otros módulos usando el comando import.[10]
Para importar un módulo, usamos el comando 'import'.[10]
Se vería de la seguiente forma: import urllib

## Pregunta 13.
Python _all_ es una colección de objetos públicos del módulo según lo determinado por import *. El valor predeterminado de ocultar cualquier cosa que comience con un guión bajo se anula con _all_.[11]
La variable Python _all_ se puede definir en el archivo _init.py de un paquete. La lista de cadenas en la variable __all_ determina los valores que se importan cada vez que se ejecuta un programa.[11]
La función principal de la sintaxis _all_ es controlar lo que se importa cuando se utiliza la sintaxis "from paquete import". Por defecto, cualquier símbolo que comience con un guion bajo () se oculta y no se importa. Sin embargo, al definir la variable __all_ en el archivo _init_.py de un paquete, podemos controlar explícitamente qué símbolos se importarán utilizando esta sintaxis.

## Pregunta 14.
Organizar el código en paquetes y modulos nos da algunas ventajas entre estás se van a mencionar 3 principales, una de ellas es la organización ya que a la hora de estar el código dividido en diferentes partes nos permite ser más organizados a la hora de ir implementandolo.
Otra es la facilidad de mantenimiento, gracias a qué el código está en secciones separadas es más fácil identificar errores y corregirlos además de que a la hora de añadir nuevas funciones será más sencillo por la modularidad del código.
Y la última es la reutilización de código, los módulos o paquetes permiten la reutilización de código en varias partes del proyecto o incluso en otros proyectos.

## Pregunta 15.
Una API web o API de servicios web es una interfaz de procesamiento de aplicaciones entre un servidor web y un navegador web, básicamente define como otros servicios o programas pueden interactuar con una aplicación web específica para acceder a sus funcionalidades y datos.[12]
Su función principal en el contexto de los servicios web es proporcionar una interfaz estandarizada y segura para que los desarrolladores externos puedan integrar y consumir los servicios ofrecidos por una aplicación web.

## Pregunta 16.
SOAP y RESTful representan dos enfoques diferentes del diseño de la API. El enfoque SOAP es altamente estructurado y utiliza el formato de datos XML. En cambio el mecanismo RESTful es más flexible y permite a las aplicaciones intercambiar datos en múltiples formatos.[13]

## Pregunta 17.
- Paso 1.
Para escribir código que interactúe con las API REST, la mayoría de los desarrolladores de Python recurren a la biblioteca requests para enviar solicitudes HTTP. Esta biblioteca abstrae las complejidades de realizar solicitudes HTTP.[14]
- Paso 2.
Luego ya se puede hacer la solicitud HTTP utilizando la biblioteca seleccionada a los puntos finales de la API. Esto implica enviar una solicitud con el método HTTP seleccionado(GET, POST, PUT, DELETE, etc.), junto con cualquier parámetro necesario, en este caso el más común de utilizar es el get el cual sirve solo para leer los datos de página web.[14]
- Paso 3.
Después se debe procesar la respuesta de los datos según sea necesario, esto puede implicar convertir los datos de respuesta a un formato JSON o XML, extraer la información relevante y realizar cualquier procesamiento adicional que se desee.[14]
- Paso 4.
Es posible que se tenga que hacer un manejo de errores lo que implica verificar si se tratan correctamente los errores de red, errores HTTP (como códigos de estado 4xx y 5xx), y cualquier otro error relacionado con la API.[14]

## Pregunta 18.
La autenticación API es un proceso de comprobación de la identidad de un usuario o aplicación que accede a la API. La autenticación se puede realizar mediante credenciales como el nombre de usuario y la contraseña, un certificado o a través del inicio de sesión único (SSO) u otros métodos.[15]
Es importante para que los datos de las página web estén seguros y no cualquier persona proteger la seguridad de los clientes así como otros posibles ataques que pueda sufrir la página, esto garantiza que solo los usuarios autorizados puedan acceder a los recursos de la API.

## Pregunta 19.
El verbo GET solicita una representación del recurso especificado. Las solicitudes que utilizan GET solo deben recuperar datos.[16]
Es un verbo seguro y no debe tener ningún efecto secundario en el servidor de los datos.
El método POST envía una entidad al recurso especificado, lo que a menudo provoca un cambio de estado o efectos secundarios en el servidor.[16]
El método PUT  reemplaza todas las representaciones actuales del recurso de destino con la carga útil de la solicitud.[16]
Se espera que la solicitud PUT contenga todos los datos necesarios para actualizar completamente el recurso, y el servidor sobrescribirá el recurso existente con los nuevos datos proporcionados.
El verbo DELETE elimina el recurso especificado.[16]
Al realizar una solicitud HTTP DELETE a una URL específica, el servidor eliminará el recurso asociado con esa URL, si existe.

1.
[Introducción a la regresión lineal: definición y aplicaciones](https://programas.uniandes.edu.co/blog/regresion-lineal)

2.
[Cómo Interpretar los Resultados del Análisis de Regresión: Valores P y Coeficientes](https://www.google.com/amp/s/blog.minitab.com/es/como-interpretar-los-resultados-del-analisis-de-regresion-valores-p-y-coeficientes%3fhs_amp=true)

3.
[Conoce las métricas de precisión más comunes para Modelos de Regresión](https://www.growupcr.com/post/metricas-precision)

4.
[Diferencia entre K-Means y DBScan Clustering](https://barcelonageeks.com/diferencia-entre-k-means-y-clustering-dbscan/)

5.
[Revisando conceptos de aprendizaje supervisado y no supervisado](https://es.linkedin.com/pulse/revisando-conceptos-de-aprendizaje-supervisado-y-arag%C3%B3n-matute)

6.
[Componente: Agrupación en clústeres K-means](https://learn.microsoft.com/es-es/azure/machine-learning/component-reference/k-means-clustering?view=azureml-api-2)

7.
[Componente: Agrupación en clústeres K-means](https://es.linkedin.com/pulse/datos-estructurados-semiestructurados-y-julio-c%C3%A9sar-bastidas)

8.
[Módulos y paquetes](https://tutorial.recursospython.com/modulos-y-paquetes/)

9.
[Organizando tus módulos de Python - __init__.py](https://bitybyte.github.io/Organzando-codigo-Python/)

10.
[Modules and Packages](https://www.learnpython.org/es/Modules%20and%20Packages#:~:text=Los%20m%C3%B3dulos%20en%20Python%20son,m%C3%B3dulo%2C%20usamos%20el%20comando%20import%20.)

11.
[La guía definitiva para Python __all__](https://www.pythonpool.com/python-__all__/)

12.
[¿Qué es una interfaz de programación de aplicaciones (API)?](https://aws.amazon.com/es/what-is/api/#:~:text=API%20significa%20%E2%80%9Cinterfaz%20de%20programaci%C3%B3n,de%20servicio%20entre%20dos%20aplicaciones.)

13.
[¿Cuál es la diferencia entre SOAP y REST?](https://aws.amazon.com/es/compare/the-difference-between-soap-rest/#:~:text=SOAP%20and%20REST%20are%20two%20different%20approaches%20to%20API%20design,exchange%20data%20in%20multiple%20formats.)

14.
[Cómo comenzar con la biblioteca de solicitudes en Python](https://www.digitalocean.com/community/tutorials/how-to-get-started-with-the-requests-library-in-python)

15.
[Autenticación y autorización para las API en Azure API Management](https://learn.microsoft.com/es-es/azure/api-management/authentication-authorization-overview)

16.
[Métodos de solicitud HTTP](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods)