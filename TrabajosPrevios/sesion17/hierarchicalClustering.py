import matplotlib.pyplot as plt
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering

# Se generan los datos
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Se define Z como el linkage
Z = linkage(X, method='complete')

# Se configura el dendrograma
plt.figure(figsize=(10, 5))
dendrogram(Z)
# Se agregan los titulos
plt.title('Dendrograma Hierarchical Clustering')
plt.xlabel('Indice del Punto de Datos')
plt.ylabel('Distancia')
# Se muestra el grafico
plt.show()

# Se crea un objeto AgglomerativeClustering con los cluster deseados
agg_clustering = AgglomerativeClustering(n_clusters=3)
# Se ajusta el clustering a los datos
agg_labels = agg_clustering.fit_predict(X)

# Se configura el grafico
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolor='k', s=50)
# Se agregan los titulos
plt.title('Resultado del Clustering Jerarquico')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
# Se muestra el grafico
plt.show()
