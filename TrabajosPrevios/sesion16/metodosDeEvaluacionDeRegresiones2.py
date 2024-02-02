# Se importan las librerias necesarias
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

# Se crean los datos ejemplo
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Se dividen los datos en prueba y entrenamiento
X_train, X_test, y_train, y_test = train_test_split(
  X, y, test_size=0.2, random_state=42)

# Generar y organizar el modelo de regresion lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Generar las preicciones del conjunto de prueba
y_pred = modelo.predict(X_test)

# Hacer el calculo del coeficiente de determinacion R^2
r2 = r2_score(y_test, y_pred)

# Mostrar los resultados
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test, y_pred, label=f'Regresion Lineal (R^2={r2:.2f})',
         color='red')
plt.title('Regresion Lineal y Coeficiente de Determinacion R^2')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
# Se muestra el grafico
plt.show()
