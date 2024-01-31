import matplotlib.pyplot as plt
import numpy as np

# Se agregan los datos
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]  # Grafico 1
valores2 = [12, 10, 15, 7]  # Grafico 2
tendencia = [11, 9, 13, 9]  # Grafico lineal

# Se inicia la creacion del grafico
# Los dos graficos en una sola figura
fig, ax = plt.subplots()

# Amplitud de barras
ancho_barra = 0.35
indice = np.arange(len(categorias))  # Se configura la ubicacion en el eje x
# Se definen los graficos de barras, grafico 1 y 2.
bar1 = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1',
              color='royalblue')
bar2 = ax.bar(indice + ancho_barra / 2, valores2, ancho_barra, label='Serie 2',
              color='lightcoral')

# Se define el grafico lineal
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Se genera el formato deseado de la figura
ax.set_xlabel('Categorías')  # Etiqueta en el eje x
ax.set_ylabel('Valores')  # Etiqueta en el eje y
# Titulo de la figura
ax.set_title('Gráfico de Barras Agrupadas con Tendencia')
ax.set_xticks(indice)  # Establece la ubicacion en el eje x
ax.set_xticklabels(categorias)  # Se agrega la etiquita en el eje x
ax.legend()

# Agregar las etiquetas en las barras
for bar in [bar1, bar2]:
    # Se itera sobre las barras individualmente
    for rect in bar:
        # Se obtiene la altura de las barras
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),  # Ubicacion vertical de la etiqueta
                    textcoords="offset points",
                    ha='center', va='bottom')

# Se muestra el grafico
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.tight_layout()
plt.show()
