import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea un grafico de linea
plt.plot(x, y, label='Datos de ejemplo')

# Definicion de formato a preferencia
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea con Etiquetas y Título')
plt.legend()

# Se muestra el grafico
plt.show()
