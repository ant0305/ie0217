import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea el grafico de linea
plt.plot(x, y, label='Datos de ejemplo')

# Se personaliza con anotaciones
plt.annotate('Valor Máximo', xy=(5, 14), xytext=(3, 16),
             arrowprops=dict(facecolor='black', shrink=0.05),
             )

# Se agregan caracteristicas adicionales
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico con Anotación')
plt.legend()

# Se muestra el grafico
plt.show()
