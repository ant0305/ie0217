import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea y perzonaliza el grafico
plt.plot(x, y)  # Agregar los datos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')
plt.grid(True)  # Mostrar la grilla

# Se muestra el grafico
plt.show()
