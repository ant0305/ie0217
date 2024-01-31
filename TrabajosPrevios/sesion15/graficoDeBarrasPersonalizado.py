import matplotlib.pyplot as plt

# Se agregan los datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Se crea la base del grafico de barras
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Se personaliza el grafico
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Gráfico de Barras', fontsize=14)
plt.xticks(rotation=45)  # Se mueven las etiqutas del eje x para mayor claridad
plt.grid(axis='y', linestyle='--', alpha=0.7)

# Agregar los valores a las barras
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Se muestra el grafico
plt.show()
