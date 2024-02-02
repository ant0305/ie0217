import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# Se crean los datos ejemplos
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Se crea un dataFrame para mejorar la legiibilidad
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia_Ciudad'])
df['Precio'] = y

# Se dividen los datos, unos como entrenamiento y otros para probar el modelo
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamaño', 'Habitaciones', 'Distancia_Ciudad']],
    df['Precio'], test_size=0.2, random_state=42)

# Se crea y personaliza la regresion lineal multiple
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Se imprime el coeficiente y el intercepto
print("Coeficientes:", modelo.coef_)
print("Intercepcion:", modelo.intercept_)

# Se realizan predicciones respecto al medelo
y_pred = modelo.predict(X_test)

# Se realizan las visualizaciones
fig = plt.figure(figsize=(12, 6))


# Se personaliza el grafico 1
ax1 = fig.add_subplot(131, projection='3d')
ax1.scatter(
 X_test['Tamaño'], X_test['Habitaciones'],
 y_test, c='blue', marker='o', alpha=0.5)
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamaño y Habitaciones')

# Se personaliza el grafico 2
ax2 = fig.add_subplot(132, projection='3d')
ax2.scatter(
 X_test['Tamaño'], X_test['Habitaciones'],
 y_pred, c='red', marker='o', alpha=0.5)
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamaño y Habitaciones')

# Se presonaliza l grafico 3
ax3 = fig.add_subplot(133)
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
ax3.plot(
 [min(y_test), max(y_test)], [min(y_test), max(y_test)],
 linestyle='--', color='red', linewidth=2)
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Comparacion de Precio Verdadero y Precio Predicho')
plt.tight_layout()
# Se muestra el grafico
plt.show()
