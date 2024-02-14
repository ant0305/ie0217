from sklearn.cluster import KMeans


# Clase para realizar el clustering K-means
class KMeansClustering:
    # Se crea un inicializador
    def __init__(self, n_clusters=8):
        self.modelo = KMeans(n_clusters=n_clusters)

    def entrenar(self, X):
        # Se entrena el modelo K-means
        self.modelo.fit(X)

    def predecir(self, X):
        # Se asignan las etiquetas de los clusters
        return self.modelo.predict(X)
