# Se importa las clases y funciones necesarias
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error


# Definicion de la clase para el modelo de regresion lineal.
class ModeloRegresionLineal:
    def __init__(self):
        # Se inicializa un modelo de regresion lineal.
        self.modelo = LinearRegression()

    def entrenar(self, X, y):
        # Se entrena el modelo de regresion lineal.
        self.modelo.fit(X, y)

    def predecir(self, X):
        # Realiza predicciones usando el modelo de regresion lineal.
        return self.modelo.predict(X)

    def evaluar(self, X, y):
        # Evalua el rendimiento del modelo de regresion lineal
        predicciones = self.predecir(X)
        # Se define el error cuadratico medio
        mse = mean_squared_error(y, predicciones)
        # Se define el coeficiente de determinacion R^2
        r2 = r2_score(y, predicciones)
        # Se define el error absoluto medio.
        mae = mean_absolute_error(y, predicciones)
        return mse, r2, mae


# Definicion de la clase para el modelo de regresion polinomial.
class ModeloRegresionPolinomial:
    def __init__(self, grado=2):
        # Inicializa un modelo de regresion polinomial utilizando un pipeline
        self.modelo = make_pipeline(PolynomialFeatures(grado),
                                    LinearRegression())

    def entrenar(self, X, y):
        # Se entrena el modelo de regresion polinomial
        self.modelo.fit(X, y)

    def predecir(self, X):
        # Realiza predicciones.
        return self.modelo.predict(X)

    def evaluar(self, X, y):
        # Mide el rendimiento del modelo polinomial con varios metodos
        predicciones = self.predecir(X)
        # Error cuadratico medio
        mse = mean_squared_error(y, predicciones)
        # Coeficiente de determinacion R^2
        r2 = r2_score(y, predicciones)
        # Error absoluto medio.
        mae = mean_absolute_error(y, predicciones)
        return mse, r2, mae
