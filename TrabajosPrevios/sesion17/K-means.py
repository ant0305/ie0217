from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Se generan los datos aleatorios
np.random.seed(42)

# Se generan los puntos bidimensionales
X = np.random.rand(100, 2) * 10

# Configurar el tamaño del grafico
plt.figure(figsize=(12, 5))

# Se visualiza el grafico sin clusters
plt.subplot(1, 2, 1)
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
# Se agregan los titulos
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
# Se especifica el numero de clusters que se quiere
kmeans = KMeans(n_clusters=3)

# Se ajusta Kmeans a los datos
kmeans.fit(X)

# Se asignan las etiquetas y coordenadas a unas variables
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Se visualiza el grafico con clusters
plt.subplot(1, 2, 2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')


plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
            label='Centroids')
# Se agregan los titulos
plt.title('Resultado del Clustering con K-Means')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.legend()
# Se ajusta el diseño para que las figuras no se superpongan
plt.tight_layout()
# Se muestra el grafico
plt.show()
