import matplotlib.pyplot as plt

# Se agregan los datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Se crea un grafico de barras
plt.bar(categorias, valores, color='royalblue')

# Crear el formato deseado
plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras Verticales')

# Se muestra el grafico
plt.show()
