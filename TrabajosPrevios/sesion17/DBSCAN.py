import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Se generan los datos ejemplos
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Objeto DBSCAN con los parametros de distancia y numero minimo de muestras
dbscan = DBSCAN(eps=0.3, min_samples=5)

# Se ajusta el dbscan a los datos
dbscan_labels = dbscan.fit_predict(X)

# Se configura el grafico
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=50)
# Se agregan los titulos
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
# Se muestra el grafico
plt.show()
