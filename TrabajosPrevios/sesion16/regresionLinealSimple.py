import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Se crean los datos ejemplo
np.random.seed(42)  # Se le dice a numpy cual semilla de datos utilizar
X = 2 * np.random.rand(100, 1)
y = 4+3 * X + np.random.randn(100, 1)

# Se crea el modele de regresion lineal
modelo = LinearRegression()

# Se personaliza el objeto pasandole los datos previamente creados
modelo.fit(X, y)

# Se muestra el coeficiente y el inntercepto
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepcion:", modelo.intercept_[0])

# Se crea una grafica para visualizar los datos
plt.scatter(X, y)
plt.plot(X, modelo.predict(X), color='red', linewidth=3)
plt.title('Regresion Lineal')
plt.xlabel('X')
plt.ylabel('y')
# Se muestra la grafica
plt.show()
