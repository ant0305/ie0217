import matplotlib.pyplot as plt

# Se agregan los datos
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Se crea el grafico pastel
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Se difine un formato
plt.title('Gráfico de Pastel')

# Se muestra el grafico
plt.show()
