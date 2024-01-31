import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea el grafico de dispersion
plt.scatter(x, y, label='Puntos')

# Se define un formato
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Dispersión')
plt.legend()

# Se muestra el grafico
plt.show()
