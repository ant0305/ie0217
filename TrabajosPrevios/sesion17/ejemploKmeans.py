from sklearn.preprocessing import StandardScaler
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# Se accede al dataFrame
data = pd.read_csv('data.csv')

# Se imprimmen algunos datos del archivo csv
print(data.head())

# Se crea un objeto StandardScaler
scaler = StandardScaler()
# Se ajusta el objeto a los datos
scaled_data = scaler.fit_transform(data)

# Lista para almacenar los valores de inercia
inertia = []

# Bucle para ajustar el modelo Kmeans
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta el modelo Kmeans a los datos
    kmeans.fit(scaled_data)
    inertia.append(kmeans. inertia_)

# Configurar el grafico
plt.plot(range(1, 11), inertia, marker='o')
# Se agregan las etiquetas
plt.title('Metodo del Codo para Seleccion de k')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
# Se muestra el grafico
plt.show()

# Se trabaja con 4 clusters,determinados usando el analisis del metodo del codo
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)

# Se agregan las etiquetas de cluster
data['Cluster'] = cluster_labels

# Se analizan los segmentos
segment_analysis = data.groupby('Cluster').mean()
# Se configura el grafico
plt.figure(figsize=(12, 6))
for cluster in range(4):
    plt.scatter(data[data['Cluster'] == cluster]['Frequency'],
                data[data['Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')
# Se agregan las etiquetas al grafico
plt.title('Segmentacion de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
plt.legend()
# Se muestra el grafico
plt.show()
