import matplotlib.pyplot as plt

# Se agregan los datos
x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Se crean las subtramas
fig, axs = plt.subplots(1, 2)

# Se crea el grafico de la primera subtrama
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')

# Se crea el grafico de la segunda subtrama
axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

# Se agregan caracteristicas adicionales
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Se define la posicion
plt.tight_layout()

# Se muestran los graficos
plt.show()
