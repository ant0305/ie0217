import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea  el grafico de linea
plt.plot(x, y)

# Se agrega el formato deseado
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')

# Se guarda el grafico
plt.savefig('grafico.png')

# Se muestra el grafico
plt.show()
