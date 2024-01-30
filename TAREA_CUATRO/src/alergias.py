"""
@file alergias.py
@brief Definicion de las clases Alergias, EvaluacionEspecifica,
TiposDeAlergias,EvaluacionGeneral las cuales son esenciales
para hacer todas las operaciones del programa

@details Este archivo contiene las clases y todo el desarrrollo de las misnmas
el cual es de fundamental para el correcto funcionamiento del sistema

@author ant0305
 """


class Alergia:
    """
    @brief Clase que representa una alergia.

    Esta clase maneja informacion sobre alergias, incluyendo su nombre y valor.

    @param nombre: El nombre de la alergia.
    @param valor: El valor asociado a la alergia

    @return None
    """
    alergiasConocidas = {
        'huevos': 1, 'cacahuetes': 2, 'mariscos': 4, 'fresas': 8,
        'tomates': 16, 'chocolate': 32, 'polen': 64, 'gatos': 128,
        'sardinas': 256, 'gluten': 512, 'huevo': 1024, 'nueces': 2048,
        'leche': 4096, 'soja': 8192, 'miel': 16384, 'piña': 32768,
        'ajo': 65536, 'maíz': 131072, 'kiwi': 262144, 'menta': 524288,
        'gambas': 1048576, 'apio': 2097152, 'pescado': 4194304,
        'manzanas': 8388608, 'cilantro': 16777216, 'aguacate': 33554432,
        'zanahorias': 67108864, 'berenjenas': 134217728, 'lentejas': 268435456,
        'almendras': 536870912, 'canela': 1073741824, 'altramuces': 2147483648,
        'mantequilla': 4294967296, 'pepino': 8589934592,
        'cangrejo': 17179869184,
        'almejas': 34359738368, 'anacardos': 68719476736,
        'coliflor': 137438953472,
        'pimienta': 274877906944, 'arándanos': 549755813888,
        'pera': 1099511627776,
        'cerveza': 2199023255552, 'guisantes': 4398046511104,
        'ciruelas': 8796093022208,
        'trigo': 17592186044416, 'higos': 35184372088832,
        'centeno': 70368744177664,
        'pistachos': 140737488355328, 'cangrejo de río': 281474976710656,
        'col': 562949953421312
    }

    # Se crea el inicializador de la clase
    def __init__(self, nombre=None, valor=None):
        self.nombre = nombre
        self.valor = valor

    # Funcion para imprimir todas las alergias del sistema
    @staticmethod
    def imptimirAlergiasConocidas():
        print("Alergias conocidas y sus valores:")
        for nombre, valor in Alergia.alergiasConocidas.items():
            print(f"{nombre}: {valor}")

    # Funcion para imprimir una alergia en especifico en base al nombre
    @staticmethod
    def imprimirAlergiaEspecifica(nombre):
        valor = Alergia.alergiasConocidas.get(nombre, "No conocida")
        print(f"{nombre}: {valor}")


class EvaluacionEspecifica:
    """
    @brief Clase que avalua la puntuacion de alergia del usuario

    @details Esta clase hace operaciones para calcular en base a una
    puntuacion que es alergico el usuario
    """
    def __init__(self, puntuacion):
        self.puntuacion = puntuacion
        self.alergias = self.evaluarAlergias(puntuacion)

    # Se crea el metodo para evaluar a que es alergico el usuario
    def evaluarAlergias(self, puntuacion):
        alergiasConocidas = Alergia.alergiasConocidas
        alergiasDetectadas = []

        for nombre, valor in alergiasConocidas.items():
            if puntuacion & valor:
                alergiasDetectadas.append(Alergia(nombre, valor))

        return alergiasDetectadas

    # Se crea un metodo para imprimir la informacion
    def imprimirResultados(self):
        print(f"Puntuacion de alergias: {self.puntuacion}")
        print("Alergias detectadas:")
        for alergia in self.alergias:
            print(f"- {alergia.nombre} (Valor: {alergia.valor})")


class TiposDeAlergias:
    """
    @brief Clase que le permite al usuario ingresar sus alergias

    @details Esta clase es utiliza para que el usuario tenga la opcion
    de agregar las alergias que padece, puede elegir si desea
    agregar solo el nombre de la alergia o solo el valor o ambos, en caso
    de que el nombre o el valor no coincida con ninguna alergia del sitema se
    no se toman en cuenta.
    """
    def __init__(self):
        # Se crean las listas necesarias para guardar los datos
        self.alergiasRegistradas = []
        self.alergiasSinNombre = []
        self.alergiasSinValor = []

    # Se crea un metodo para que el usuario agregue sus alergias
    def agregarAlergiaUsuario(self, nombre, valor):
        if nombre and valor:  # Si agrega el valor y el nombre
            try:
                valor = int(valor)
                self.alergiasRegistradas.append(Alergia(nombre, valor))
            except ValueError:  # Se crea una excepcion
                print("El valor debe ser un numero entero.")
        elif nombre:  # Si agrega solo el nombre
            valor = Alergia.alergiasConocidas.get(nombre)
            if valor:
                self.alergiasRegistradas.append(Alergia(nombre, valor))
            else:
                self.alergiasSinValor.append(nombre)
        elif valor:  # Si agrega solo el valor
            try:
                valor = int(valor)
                nombre = next((n for n, v in Alergia.
                               alergiasConocidas.items() if v == valor), None)
                if nombre:
                    self.alergiasRegistradas.append(Alergia(nombre, valor))
                else:
                    self.alergiasSinNombre.append(valor)
            except ValueError:  # Se atrapa una excepcion
                print("El valor debe ser un numero entero.")
        else:
            print("Debe proporcionar al menos un nombre o un valor.")


"""
@brief Clase que le permite al usuario hacer diferentes calculos con
las alergias que ingresa

@details Esta clase es utiliza para hacer diferentes calculos con
las alergias que ingreso el usuario ingreso
"""


class EvaluacionGeneral:
    # Se crea un inicializador
    def __init__(self, tiposAlergias):
        self.tiposAlergias = tiposAlergias
        self.puntuacionTotal = self.calcularPuntuacionTotal()
        self.promedio = self.calcularPromedio()

    # Se calcula la puntuacion de las alergias que ingreso el usuario
    def calcularPuntuacionTotal(self):
        total = sum(alergia.valor for alergia in
                    self.tiposAlergias.alergiasRegistradas if alergia.valor)
        return total

    # Metodo para calcular el promedio
    def calcularPromedio(self):
        # Se suman las alergias validas
        totalConocido = sum(alergia.valor for alergia in self.
                            tiposAlergias.alergiasRegistradas if alergia.valor)
        # Se suman la cantidad de alergias validas
        totalAlergias = len([alergia for alergia in self.tiposAlergias
                             .alergiasRegistradas if alergia.valor])
        if totalAlergias == 0:
            return 0
        # Se retorna el promedio
        return totalConocido / totalAlergias

    def imprimirEvaluacion(self):
        # Imprime los resultados
        print("Puntuacion General de Alergias:", self.puntuacionTotal)
        print("Detalle de Alergias:")
        for alergia in self.tiposAlergias.alergiasRegistradas:
            print(f"- {alergia.nombre} (Valor: {alergia.valor})")
        # Imprime las alergias sin valor
        if self.tiposAlergias.alergiasSinValor:
            print("\nAlergias Registradas sin Puntuacion:",
                  self.tiposAlergias.alergiasSinValor)
        # Imprime las alergias sin nombre
        if self.tiposAlergias.alergiasSinNombre:
            print("Resultados Desconocidos:",
                  self.tiposAlergias.alergiasSinNombre)

        print("\nPromedio entre alergias conocidas y desconocidas:",
              self.promedio)
