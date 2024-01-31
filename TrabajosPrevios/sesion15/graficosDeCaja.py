import matplotlib.pyplot as plt

# Se agregan los datos
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Se crea el grafico de caja
plt.boxplot(datos)

# Se define el formato
plt.ylabel('Valores')
plt.title('Gráfico de Caja')

# Se muestra el grafico
plt.show()
