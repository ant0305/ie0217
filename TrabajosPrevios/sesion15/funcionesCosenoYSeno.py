import matplotlib.pyplot as plt
import numpy as np

# Se crean los datos a utilizar
x = np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Se generan los graficos de las funciones
plt.plot(x, y1, label='Seno')
plt.plot(x, y2, label='Coseno')

# Se define el formato deseado
plt.xlabel('Ángulo (rad)')
plt.ylabel('Valor')
plt.title('Funciones Seno y Coseno')
plt.legend()

# Se muestra el grafico
plt.show()
