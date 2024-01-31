import matplotlib.pyplot as plt

# Se agregan los datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Se define una figura con dos subtramas
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Gafico de barras para la subtrama 1
axs[0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Gráfico de Barras')

# Grafico de linea para la subtrama 2
axs[1].plot(categorias, tendencia, color='green', marker='o')
axs[1].set_title('Gráfico de Línea')

# Se definen caracteristicas adicionales
for ax in axs:
    ax.set_xlabel('Categorías')
    ax.set_ylabel('Valores')

# Se define la posicion
plt.tight_layout()

# Se muestra la figura
plt.show()
