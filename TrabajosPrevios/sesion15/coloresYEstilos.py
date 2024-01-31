import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea un grafico de linea con diferentes caracteristicas
# Se personaliza con marcadores, colores y estilos
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Se agregan caracteristicas adicionales
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado')
plt.legend()

# Se muestra el grafico
plt.show()
