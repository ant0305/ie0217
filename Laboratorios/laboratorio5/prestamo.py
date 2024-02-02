import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


class Prestamos:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # Se definen todas las variables necesarias
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        try:
            # Se calcula la tasa de interes mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            # Se calcula la cuota mensual a pagar
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / \
                            (1-(1 + tasa_interes_mensual)**-self.cuotas)

            saldo_restante = self.monto_prestamo
            amortizacion = []
            # Calcula la amortizacion y el interes a cada cuota
            for cuota in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_principal
                amortizacion.append(
                    {'Cuota': cuota, 'Interes': interes_pendiente,
                                     'Amortizacion': amortizacion_principal,
                                     'Saldo restante': saldo_restante})
            return amortizacion
        except ZeroDivisionError:  # Se atrapa un error en caso de que suceda
            print("Error: la cantidad de cuotas no puede ser cero")
            return []

    # Se genera un dataFrame como reporte
    def generar_reporte(self, archivo_salida):
        try:
            # Se crea el dataFrame
            df = pd.DataFrame(self.amortizacion)
            # Se guarda el dataFrame
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte generado con exito: {archivo_salida}')
        except Exception as e:
            print(f'Ocurrio un error al generar reporte: {str(e)}')

    def graficar_amortizacion(self):
        # Se crea un dataFrame
        df = pd.DataFrame(self.amortizacion)
        data = np.array([df['Interes'], df['Amortizacion']])

        # Se crean los graficos
        plt.bar(df['Cuota'], data[0], label='Interes')
        plt.bar(df['Cuota'], data[1], bottom=data[0], label='Amortizacion')

        # Se personaliza el grafico
        plt.xlabel('Numero de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortizacion e Interes por cuota')
        plt.legend()
        # Se muestra la grafica
        plt.show()


def main():
    try:

        # Se le piden los datos al usuario
        monto_prestamo = float(input("Ingrese el monto del prestamo: "))
        tasa_interes_anual = float(input("Ingrese la tasa de interes anual :"))
        cuotas = int(input("Ingrese la cantidad de cuotas: "))

        # Se instancia el prestamo
        prestamo = Prestamos(monto_prestamo, tasa_interes_anual, cuotas)

        # Se genera el reporte
        archivo_salida = "reporte_amortizacion.csv"
        prestamo.generar_reporte(archivo_salida)

        # Se imprime la informacion que se ingreso
        print("Informacion del prestamo:")
        print(f"Monto del prestamo: ${monto_prestamo}")
        print(f"Tasa de interes anual: {tasa_interes_anual}%")
        print(f"Cantidad de cuotas: {cuotas}")

        # Se grafica la amortizacion
        prestamo.graficar_amortizacion()

    # Se manejan los errores
    except ValueError:
        print("Error: Ingrese un valor numerico valido.")
    except Exception as e:
        print(f"Ocurrio un error: {str(e)}")


if __name__ == "__main__":
    main()
