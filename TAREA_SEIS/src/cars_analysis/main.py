# Se importan las librerias necesarias
from kaggle.api.kaggle_api_extended import KaggleApi
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error
from regression import ModeloRegresionLineal, ModeloRegresionPolinomial
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_score
from clustering import KMeansClustering
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import os


# Funcion para descargar los datos
def descargar_conjunto_datos(api_token):
    os.environ['KAGGLE_USERNAME'] = api_token['username']
    os.environ['KAGGLE_KEY'] = api_token['key']
    api = KaggleApi()  # Inicializa la API
    api.authenticate()  # Autentica usando la API de kaggle
    # Se descargan los datos
    api.dataset_download_files('akshaydattatraykhare/car-details-dataset',
                               path='./data', unzip=True)


# Se preparan los datos para su posterior uso
def cargar_y_limpiar_datos(filepath):
    df = pd.read_csv(filepath)  # Se carga el archivo en un csv
    # Se iliminan los duplicados
    df.drop_duplicates(inplace=True)
    # Elimina filas con valores vacios
    df.dropna(inplace=True)
    # Convierte la columna year en tipo entero
    df['year'] = df['year'].astype(int)
    # Renombra las columnas
    df = df.rename(columns={
        "name": "nombre",
        "year": "año",
        "selling_price": "precio_venta",
        "km_driven": "km_recorridos",
        "fuel": "combustible",
        "seller_type": "tipo_vendedor",
        "transmission": "transmision",
        "owner": "dueño"
    })
    return df  # Retorna el dataFrame


# Funcion para visualizar los resultados de las regresiones
def visualizar_resultados(X, y, y_pred_lin, y_pred_poly, feature, target):
    # Se ordenan los indices
    sorted_indices = np.argsort(X.flatten())
    sorted_X = X[sorted_indices]
    sorted_y = y[sorted_indices]
    # Ordena las predicciones lineales
    sorted_y_pred_lin = y_pred_lin[sorted_indices]
    # Ordena las predicciones no lineales
    sorted_y_pred_poly = y_pred_poly[sorted_indices]

    # Creacion de grafico
    plt.figure(figsize=(10, 5))
    # Se grafican los datos reales
    plt.scatter(sorted_X, sorted_y, color='gray', label='Datos reales')
    # Grafica la regresion lineal
    plt.plot(sorted_X, sorted_y_pred_lin, color='blue',
             label='Regresion Lineal')
    # Grafica la regresion polinomica
    plt.plot(sorted_X, sorted_y_pred_poly, color='red',
             label='Regresion Polinomial')
    # Configura las etiquetas
    plt.title(f'Regresion sobre {feature}')
    plt.xlabel(feature)
    plt.ylabel(target)
    plt.legend()
    # Muestra el grafico
    plt.show()


# Realiza la regresion lineal y no lineal
def realizar_regresion(df, feature, target, degree=2):
    # Obtiene las caracteristicas del dataFrame
    X = df[[feature]].values.reshape(-1, 1)
    # Obtiene el objeto del dataFrame
    y = df[target].values
    # Divide los datos en prueba y entrenamiento
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2,
                                                        random_state=42)

    # Regresion Lineal
    lin_model = ModeloRegresionLineal()
    lin_model.entrenar(X_train, y_train)
    y_pred_lin = lin_model.predecir(X_test)

    # Regresion Polinomial
    poly_model = ModeloRegresionPolinomial(grado=degree)
    poly_model.entrenar(X_train, y_train)
    y_pred_poly = poly_model.predecir(X_test)

    # Evaluacion de la regresion lineal
    print(f"Resultados de la Regresion Lineal para {feature} vs {target}:")
    print("MSE:", mean_squared_error(y_test, y_pred_lin))
    print("R²:", r2_score(y_test, y_pred_lin))
    print("MAE:", mean_absolute_error(y_test, y_pred_lin))

    # Evaluacion de la regresion polinomial
    print(f"Resultados de la Regresion Polinomial para {feature} vs {target}:")
    print("MSE:", mean_squared_error(y_test, y_pred_poly))
    print("R²:", r2_score(y_test, y_pred_poly))
    print("MAE:", mean_absolute_error(y_test, y_pred_poly))

    # Visualizacion
    visualizar_resultados(X_test, y_test, y_pred_lin, y_pred_poly,
                          feature, target)


# Funcion para encontrar el numero obtimo de clusters
def encontrar_clusters_optimos(datos):
    # Calcular inercias para diferentes k y almacenar los valores
    inercias = []
    # Ciclo para iterar sobre los diferentes valosres de k(numero de clusters)
    for k in range(1, 11):
        kmeans = KMeansClustering(n_clusters=k)
        # Se entrena el modelo
        kmeans.entrenar(datos)
        inercias.append(kmeans.modelo.inertia_)

    # Mostrar el grafico del metodo del codo
    plt.figure(figsize=(10, 6))
    plt.plot(range(1, 11), inercias, '-o')
    # Se configuran las etiquetas
    plt.title('Metodo del Codo')
    plt.xlabel('Numero de Clusters')
    plt.ylabel('inercias (Suma de los Cuadrados de las Distancias)')
    # Se muestra el grafico
    plt.show()
    # Se retorna el numero optimo de clusters vistos previamente
    return 3


def agrupamiento_vehiculos(df):
    # Escalar las caracteristicas seleccionadas para el agrupamiento
    scaler = StandardScaler()
    features = df[['km_recorridos', 'año', 'precio_venta']]
    scaled_features = scaler.fit_transform(features)

    clusters_optimos = encontrar_clusters_optimos(scaled_features)

    # Aplicar KMeans con el numero optimo de clusters
    kmeans = KMeansClustering(n_clusters=clusters_optimos)
    kmeans.entrenar(scaled_features)
    labels = kmeans.predecir(scaled_features)

    # Agregar las etiquetas de cluster al DataFrame para analisis posteriores
    df['cluster'] = labels
    # Configurando el grafico
    plt.figure(figsize=(10, 6))
    plt.scatter(df['km_recorridos'], df['precio_venta'], c=df['cluster'],
                cmap='viridis', alpha=0.5)
    # Configurando las etiquetas
    plt.title(
        'Visualizacion de Clusters basada en km_recorridos y precio_venta')
    plt.xlabel('Kilometros Recorridos')
    plt.ylabel('Precio de Venta')
    plt.colorbar(label='Cluster')
    # Se muestra el grafico
    plt.show()

    # Mide el coeficiente de Silhouette promedio para asi medir rendimiento.
    silhouette_avg = silhouette_score(scaled_features, labels)

    # Imprime el coeficiente de Silhouette promedio.
    print('Rendimiento del primer grafico:', silhouette_avg)


def encontrar_clusters_optimos2(datos):
    # Calcular inercias para diferentes k y almacenar los valores
    inercias = []
    # Ciclo para iterar sobre los diferentes valosres de k(numero de clusters)
    for k in range(1, 11):
        kmeans = KMeansClustering(n_clusters=k)
        # Se entrena el modelo
        kmeans.entrenar(datos)
        inercias.append(kmeans.modelo.inertia_)

    # Mostrar el grafico del metodo del codo
    plt.figure(figsize=(10, 6))
    plt.plot(range(1, 11), inercias, '-o')
    # Se configuran las etiquetas
    plt.title('Metodo del Codo')
    plt.xlabel('Numero de Clusters')
    plt.ylabel('inercias (Suma de los Cuadrados de las Distancias)')
    # Se muestra el grafico
    plt.show()
    # Se retorna el numero optimo de clusters vistos previamente
    return 3


def agrupamiento_vehiculos2(df):
    scaler = StandardScaler()
    # Se declaran las features(anio y precio_venta)
    features = df[['año', 'precio_venta']]
    # Se ajustan la transformacion de los datos features.
    scaled_features = scaler.fit_transform(features)
    # Se encuentra el numero optimo de clusters
    clusters_optimos = encontrar_clusters_optimos2(scaled_features)

    # Inicializa un objeto de clustering KMeans
    kmeans = KMeansClustering(n_clusters=clusters_optimos)
    # Se entrena el modelo
    kmeans.entrenar(scaled_features)
    # Se asignan las etiquetas al cluster
    labels = kmeans.predecir(scaled_features)

    df['cluster'] = labels
    # Se configura el grafico
    plt.figure(figsize=(10, 6))
    plt.scatter(df['año'], df['precio_venta'], c=df['cluster'],
                cmap='viridis', alpha=0.5)
    # Se configuran las etiquetas
    plt.title('Clusters basados en Año y Precio de Venta')
    plt.xlabel('Año')
    plt.ylabel('Precio de Venta')
    plt.colorbar(label='Cluster')
    # Se muestra el grafico
    plt.show()

    # Mide el coeficiente de Silhouette promedio para asi medir rendimiento.
    silhouette_avg = silhouette_score(scaled_features, labels)

    # Imprime el coeficiente de Silhouette promedio.
    print('Rendimiento del primer grafico:', silhouette_avg)


def main():
    # Se agrega el usuario y la clave API
    api_token = {
        "username": "anthonycalvo",
        "key": "47bd4b5d2f7c944e00739ee9c34d9124"
    }
    # El nombre del archivo
    dataset_filename = 'CAR DETAILS FROM CAR DEKHO.csv'
    # Lugar adonde se descarga
    dataset_filepath = os.path.join('./data', dataset_filename)

    if not os.path.exists(dataset_filepath):
        descargar_conjunto_datos(api_token)
    # Se limpian los datos
    df = cargar_y_limpiar_datos(dataset_filepath)

    # Ejecutar regresiones (ajusta estos llamados segun tus necesidades)
    realizar_regresion(df, 'año', 'precio_venta')
    realizar_regresion(df, 'km_recorridos', 'precio_venta', degree=3)
    # Realizar agrupamiento
    agrupamiento_vehiculos(df)
    agrupamiento_vehiculos2(df)


# Se llama a la funcion main para ejecutar el codigo
if __name__ == '__main__':
    main()
