from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Se generan los datos
np.random.seed(42)

# Se generan los puntos bidimensionales
X = np.random.rand(100, 2) * 10

inertias = []
# Bucle para calcular el numero de clusters optimo
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta Kmeans a los datos
    kmeans.fit(X)
    inertias.append(kmeans.inertia_)

# Se genera el  grafico
plt.plot(range(1, 11), inertias, marker='o')
# Se agregan los titulos
plt.title('Metodo del Codo')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
# Se muestra el grafico
plt.show()
