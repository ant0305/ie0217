from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt
import numpy as np

# Se generan los datos
np.random.seed(42)

# Se generan los puntos bidimensionales
X = np.random.rand(100, 2) * 10

silhouette_scores = []
# Bucle para calcular el coeficiente de silueta
for k in range(2, 20):
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta el Kmeans a los datos
    kmeans.fit(X)
    score = silhouette_score(X, kmeans.labels_)
    # Se agrega el valor del coeficiente de la silueta a la lista
    silhouette_scores.append(score)

# Se genera el  grafico
plt.plot(range(2, 20), silhouette_scores, marker='o')
# Se agregan los titulos
plt.title('Metodo de la Silueta')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Coeficiente de Silueta')
# Se muestra el grafico
plt.show()
