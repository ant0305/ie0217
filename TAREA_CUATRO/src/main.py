"""
@file main.py
@brief Este es el archivo main de alergias.py

@details Este archivo es el encargado de interactuar con el usuario
y realiza las siguientes acciones:

1. Se le da un mensaje de bienvenida al usuario.
2. Se le pregunta al usuario si quiere ver las
alergias del sistema o buscar una en especifico en caso de que
acepte se muestran las dos opciones y el usuario decide cual
utilizar.
3. Luego se le dice al usuario si desea introduccir las alergias
que padece en este caso el usuario tendra la opcion de introduccir
solo el nombre o solo el valor. Esto lo hace llamando al metodo
que esta en TiposDeAlergias.
4. Finalmente el usuario introduce su puntaje de alergias y se le
muestra cuales son las alergias que padece.


@author ant0305
 """

import time
import cProfile
from alergias import EvaluacionEspecifica, TiposDeAlergias, \
                        EvaluacionGeneral, Alergia
"""

@brief Funcion principal del sistema de evaluacion de alergias.

Esta funcion tiene una serie de opciones para que
el usuario pueda interactuar con el codigo.


@param None

@return None

@autor ant0305

"""


def main():
    print("Bienvenido al sistema de evaluacion de alergias.")

    # Crear instancia de la clase para manejar tipos de alergias
    tiposAlergias = TiposDeAlergias()
    # Se crea una opcion para imprimir las alergias del sistema
    opcion = input("¿Buscar alergias en el sistema? (s/n): ")
    if opcion.lower() == 's':
        print("1 : Imprimir todas las alergias del sistema")
        print("2 : Buscar una alergia en especifico")
        variable = int(input("Ingrese el numero: "))
        if variable == 1:
            imprimirTodo = Alergia()
            imprimirTodo.imptimirAlergiasConocidas()

        if variable == 2:
            nombre = input("Ingrese el nombre: ")
            imprimirEspecifico = Alergia()
            imprimirEspecifico.imprimirAlergiaEspecifica(nombre)
    while True:
        # Opcion por si el usuario quiere ingresar sus alergias
        opcion = input("¿Desea agregar sus alergias? (s/n): ")
        if opcion.lower() != 's':
            break

        nombreAlergiaUsuario = input(
            "Ingrese el nombre de su alergia(dejar en blanco si desconocido):")
        valorAlergiaUsuario = input(
            "Ingrese el valor de su alergia(dejar en blanco si desconocido):")
        # Codigo para manenjar los errores
        try:
            valorAlergiaUsuario = int(
                valorAlergiaUsuario) if valorAlergiaUsuario else None
        except ValueError:
            print("El valor debe ser un numero entero.")
            continue

        tiposAlergias.agregarAlergiaUsuario(
            nombreAlergiaUsuario, valorAlergiaUsuario)

    # Ingreso de puntuacion de alergia del usuario
    try:
        puntuacion = int(input("Ingrese su puntuacion de alergias: "))
    except ValueError:
        print("Debe ingresar un numero entero.")
        return

    # Evaluacion de alergias segun la puntuacion ingresada
    evaluacionEspecifica = EvaluacionEspecifica(puntuacion)
    evaluacionEspecifica.imprimirResultados()

    # Evaluacion general en base a las alergias registradas y las del usuario
    evaluacionGeneral = EvaluacionGeneral(tiposAlergias)
    evaluacionGeneral.imprimirEvaluacion()


if __name__ == "__main__":
    # Medicion del tiempo de ejecucion
    inicio = time.time()
    cProfile.run('main()')
    fin = time.time()
    print(f"Tiempo de ejecucion: {fin - inicio} segundos")
"""
Se hizo el calculo con las alergias originales y luego agregandole el resto
de las alergias hay un pequeño resumen en el readme
"""
