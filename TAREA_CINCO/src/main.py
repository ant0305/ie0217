# Se importan las librerias necesarias
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import numpy as np

# Se cargan los datos del archivo
nombre_archivo = 'archivocsv.csv'

try:
    # Se intenta abrir el archivo en modo lectura
    datos = pd.read_csv(nombre_archivo)
    print("Archivo cargado exitosamente.")
except FileNotFoundError:  # Atrapar un error en caso de archivo no encontrado
    print(f"El archivo {nombre_archivo} no se encontro.")
except Exception as e:  # Atrapar cualquier otro error que pueda suceder
    print(f"Ocurrio un error al cargar el archivo: {e}")


# Esta clase se encarga de modificar los datos para su posterior uso
class DataFrameCleanerIterator:
    def __init__(self, dataframe):
        # Se crea una copia del dataframe para evitar modificar el original
        self.dataframe = dataframe.copy()
        # Se prepara el dataframe
        self.prepare_dataframe()
        self.index = 0

    def prepare_dataframe(self):
        # Se le cambia el formato a la fecha
        self.dataframe['date'] = pd.to_datetime(self.dataframe['date'])
        # Se filtran los datos para excluir el año 2021
        self.dataframe = self.dataframe[self.dataframe['date'].dt.year < 2021]
        # Se eliminan varias columnas innecesarias
        self.dataframe.drop(columns=['state_fips', 'county_fips', 'state_code',
                                     'row_id'], inplace=True)
        # Se rellenan los valores vacios con cero
        self.dataframe.fillna(0, inplace=True)
        # Se remplaza 'County' por 'Condado' en la columna 'level'
        self.dataframe['level'] = (self.dataframe['level'].
                                   replace('County', 'Condado'))

    # Se inicializa el iterador
    def __iter__(self):
        return self

    # Metodo para obtener la siguiente fila del iterador
    def __next__(self):
        if self.index < len(self.dataframe):
            row = self.dataframe.iloc[self.index]
            self.index += 1
            return row  # Devuelve la fila
        else:  # Atrapa una excepcion
            raise StopIteration


# Se crea un objeto iterador
cleaner_iterator = DataFrameCleanerIterator(datos)
# Variable que contiene el objeto iterador para facilitar su manejo
datos_limpios = cleaner_iterator.dataframe

print("\nTransformaciones completadas:")
print(datos_limpios.head())


# Calcular el numero de viajes hechos en cada rango
def contador_viajes_por_rango(datos):
    # Se crea un diccionario para almacenar los rangos
    conteo_viajes = {rango: 0 for rango in ['1', '1_3', '3_5', '5_10', '10_25',
                                            '25_50', '50_100', '100_250',
                                            '250_500', '500']}
    # Se itera atraves de las filas
    for _, fila in datos.iterrows():
        # Se itera atraves de  los rangos
        for rango in conteo_viajes:
            # Suma los viajes
            conteo_viajes[rango] += fila.get(f'trips_{rango}', 0)
    # Devuelve el diccionario
    yield conteo_viajes


# Se inicializa el generador
generador_viajes = contador_viajes_por_rango(datos_limpios)

# Se imprimen los viajes hechos por rango
for conteo in generador_viajes:
    print("Conteo de viajes por rango:", conteo)

# Se hace un analisis general de los datos
print("Descripcion general de los datos:")
print(datos_limpios.describe())

# Se calcula el promedio de viajes por distancia por dia
print("\nPromedio de viajes por rango de distancia:")
for columna in ['trips_1', 'trips_1_3', 'trips_3_5', 'trips_5_10',
                "trips_10_25", "trips_25_50", "trips_50_100",
                "trips_100_250", "trips_250_500", "trips_500"]:
    print(f"{columna}: {datos_limpios[columna].mean()}")


# Se calcula la desviacion estandar de las columnas seleccionadas
def desviacion_estandar(datos):
    for columna in ['trips_1', 'trips_1_3', 'trips_3_5', 'trips_5_10',
                    "trips_10_25", "trips_25_50", "trips_50_100",
                    "trips_100_250", "trips_250_500", "trips_500"]:
        # Se calcula la desviacion estandar con el metodo std()
        desviacion_estandar = datos[columna].std()
        # Devuelve el calculo realizado con el nombre de la columna
        yield columna, desviacion_estandar


# Se imprime la desviacion estandar
print("\nDesviacion Estandar:")
for columna, desviacion in desviacion_estandar(datos_limpios):
    print(f"{columna}: Desviacion Estandar = {desviacion:.2f}")
print("")


class CondadoIterador:
    '''Esta clase se encarga de imprimir algunos dias del 2019 y  otros
    del 2020 para hacer una comparacion de los datos'''
    def __init__(self, dataframe, nombre_condado):
        self.dataframe = dataframe
        self.nombre_condado = nombre_condado
        # Se filtran los datos del 2019
        self.filas_2019 = (
            dataframe[(dataframe['county'] == nombre_condado) &
                      (dataframe['date'] >= '2019-01-01') &
                      (dataframe['date'] < '2020-01-01')].iterrows())
        # Se filtran los datos del 2020
        self.filas_2020 = (
            dataframe[(dataframe['county'] == nombre_condado) &
                      (dataframe['date'] >= '2020-01-01') &
                      (dataframe['date'] < '2020-12-31')].iterrows())
        self.counter_2019 = 0
        self.counter_2020 = 0

    # Se inicializa un iterador
    def __iter__(self):
        return self

    def __next__(self):
        # Se limita la cantidad de datos que se van a imprimir del 2019
        if self.counter_2019 < 5:
            try:
                self.counter_2019 += 1
                return next(self.filas_2019)[1]
            except StopIteration:
                pass  # Si se terminan las filas no hace nada
        # Se limitan los datos  que se van a imprimir del 2020
        if self.counter_2020 < 5:
            try:
                self.counter_2020 += 1
                return next(self.filas_2020)[1]
            except StopIteration:
                pass  # Si se terminan las filas no hace nada
        # Si se han impreso 5 filas de ambos años levanta una excepcion
        raise StopIteration


nombre_condado = "Autauga County"
# Se crea un objeto iterador
iterador_condado = CondadoIterador(datos_limpios, nombre_condado)

print(f"Datos de movilidad para {nombre_condado}:")
try:
    # Se imprimen los datos
    for fila in iterador_condado:
        print(f"Fecha: {fila['date'].date()},"
              f" Poblacion en casa: {fila['pop_stay_at_home']},"
              f" Poblacion fuera de casa: {fila['pop_not_stay_at_home']}")
except StopIteration:  # Se maneja una excepcion cuando se acaban los datos
    print("Fin de los datos para el condado seleccionado.")


# Suma de viajes por mes
viajes_mes = datos_limpios.groupby('month')['trips'].sum()

# Creacion de grafico de linea
plt.figure(figsize=(8, 4))
plt.plot(viajes_mes.index, viajes_mes.values, color='blue')
# Configuracion de etiquetas
plt.title('Total de Viajes por Mes')
plt.xlabel('Mes')
plt.ylabel('Total de Viajes')
plt.xticks(viajes_mes.index)
# Se muestra el grafico
plt.show()

# Agrupar por 'month' y sumar 'pop_stay_at_home'
meses_agrupados = (datos_limpios.groupby('month')
                   ['pop_stay_at_home'].sum().reset_index())

# Ordenar los resultados por orden ascendente
meses_agrupados_sorted = meses_agrupados.sort_values(by='pop_stay_at_home',
                                                     ascending=False)

# Se genera el grafico
plt.figure(figsize=(8, 4))
plt.bar(meses_agrupados_sorted['month'],
        meses_agrupados_sorted['pop_stay_at_home'], color='skyblue')

# Agregar las etiquetas y el titulo
plt.title('Meses con Mayor Cantidad de Personas que se Quedaron en Casa')
plt.xlabel('Mes')
plt.ylabel('Cantidad de Personas que se Quedaron en Casa')
plt.xticks(meses_agrupados_sorted['month'], rotation=45)

# Se agregan las etiquetas al eje x
meses_nombres = ['Enero', 'Febrero', 'Marzo', 'Abril', 'Mayo', 'Junio',
                 'Julio', 'Agosto', 'Septiembre', 'Octubre',
                 'Noviembre', 'Diciembre']
plt.xticks(meses_agrupados_sorted['month'],
           [meses_nombres[mes - 1] for mes in meses_agrupados_sorted['month']])

plt.grid(axis='y')
# Se muestra el grafico
plt.show()


def datos_para_visualizacion(df):
    '''Gegerador que calcula la suma de la cantidad de personas que se
    quedaron en casa y las que salieron por mes'''
    agrupado = df.groupby('month').agg({
        'pop_stay_at_home': 'sum',
        'pop_not_stay_at_home': 'sum'}).reset_index()
    # Devuelve el mes y la  sumas correspondientes
    for _, row in agrupado.iterrows():
        yield (row['month'],
               row['pop_stay_at_home'],
               row['pop_not_stay_at_home'])


# Se crean listas para almacenar los datos
meses = []
pop_stay_at_home = []
pop_not_stay_at_home = []
# Itera atraves del generador datos para visualizacion
for mes, stay_home, not_stay_home in datos_para_visualizacion(datos_limpios):
    # Agrega los valores a las listas
    meses.append(mes)
    pop_stay_at_home.append(stay_home)
    pop_not_stay_at_home.append(not_stay_home)


# Se crea el grafico
plt.figure(figsize=(8, 4))
# Se trazan ambas lineas usando la libreria seaborn
sns.lineplot(x=meses, y=pop_stay_at_home, label='Poblacion en Casa',
             marker='o')
sns.lineplot(x=meses, y=pop_not_stay_at_home,
             label='Poblacion que se fue de Viaje', marker='x')
# Se agregan las etiquetas
plt.title('Poblacion en Casa vs. Poblacion que se fue de Viaje por Mes')
plt.xlabel('Mes')
plt.ylabel('Cantidad de Poblacion')
plt.legend()
# Se activa la cuadricula en el grafico
plt.grid(True)

# Se muestra el grafico
plt.show()


# Generador para calcular la densidad de los viajes
def datos_para_visualizacion_densidad(df):
    # Lista de rangos
    rangos = ['1', '1_3', '3_5', '5_10', '10_25', '25_50', '50_100',
              '100_250', '250_500', '500']
    for rango in rangos:
        yield rango, df[f'trips_{rango}'].sum()


# Se crea un diccionario
data_densidad = {'Rango': [], 'Total_Viajes': []}

# Iteracion atraves del generador
for rango, total_viajes in datos_para_visualizacion_densidad(datos_limpios):
    data_densidad['Rango'].append(rango)
    data_densidad['Total_Viajes'].append(total_viajes)

# Creacion de un dataFrame apartir del diccionario
df_densidad = pd.DataFrame(data_densidad)

# Se crea el grafico
plt.figure(figsize=(8, 4))
# Se crea un grafico de barras usando seaborn
sns.barplot(data=df_densidad, x='Rango', y='Total_Viajes')
# Se le agregan los titulos
plt.title('Densidad de Viajes por Rango de Distancia')
plt.xlabel('Rango de Distancia')
plt.ylabel('Total de Viajes')
# Se rotan los titulos del eje x
plt.xticks(rotation=45)
# Mostrar el codigo
plt.show()

print('\n Segunda parte de la practica: \n')

# Se crean las calificaciones
calificaciones = np.array([
    [75, 88, 92, 70, 65],
    [80, 85, 88, 90, 95],
    [78, 82, 84, 76, 80],
    [90, 92, 94, 88, 85],
    [85, 87, 89, 93, 90]
])


# Funcion para calcular los promedios
def calcular_promedios(calificaciones):
    promedio_estudiantes = np.mean(calificaciones, axis=1)
    promedio_asignaturas = np.mean(calificaciones, axis=0)
    return promedio_estudiantes, promedio_asignaturas


# Se calculan los promedios
promedio_estudiantes, promedio_asignaturas = calcular_promedios(calificaciones)

# Se encuentra la calificacion maxima por estudiante
max_calificaciones_estudiantes = np.max(calificaciones, axis=1)

# Se calcula la suma total de calificaciones por asignatura
suma_total_asignaturas = np.sum(calificaciones, axis=0)

# Se imprimen los resultados
print("Conjunto de datos de calificaciones:\n", calificaciones)
print("\nPromedio de calificaciones por estudiante:", promedio_estudiantes)
print("Promedio de calificaciones por asignatura:", promedio_asignaturas)
print("\nCalificacion maxima obtenida por cada estudiante:",
      max_calificaciones_estudiantes)
print("Suma total de calificaciones por asignatura:", suma_total_asignaturas)
