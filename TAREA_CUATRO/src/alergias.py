class Alergia:
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

    def __init__(self, nombre, valor):
        self.nombre = nombre
        self.valor = valor

    @staticmethod
    def imptimirAlergiasConocidas():
        print("Alergias conocidas y sus valores:")
        for nombre, valor in Alergia.alergiasConocidas.items():
            print(f"{nombre}: {valor}")

    @staticmethod
    def imprimirAlergiaEspecifica(nombre):
        valor = Alergia.alergiasConocidas.get(nombre, "No conocida")
        print(f"{nombre}: {valor}")


class EvaluacionEspecifica:
    def __init__(self, puntuacion):
        self.puntuacion = puntuacion
        self.alergias = self.evaluarAlergias(puntuacion)

    def evaluarAlergias(self, puntuacion):
        alergiasConocidas = Alergia.alergiasConocidas
        alergiasDetectadas = []

        for nombre, valor in alergiasConocidas.items():
            if puntuacion & valor:
                alergiasDetectadas.append(Alergia(nombre, valor))

        return alergiasDetectadas

    def imprimirResultados(self):
        print(f"Puntuacion de alergias: {self.puntuacion}")
        print("Alergias detectadas:")
        for alergia in self.alergias:
            print(f"- {alergia.nombre} (Valor: {alergia.valor})")


class TiposDeAlergias:
    def __init__(self):
        self.alergiasRegistradas = []
        self.alergiasSinNombre = []
        self.alergiasSinValor = []

    def agregarAlergiaUsuario(self, nombre, valor):
        if nombre and valor:
            try:
                valor = int(valor)
                self.alergiasRegistradas.append(Alergia(nombre, valor))
            except ValueError:
                print("El valor debe ser un número entero.")
        elif nombre:
            valor = Alergia.alergiasConocidas.get(nombre)
            if valor:
                self.alergiasRegistradas.append(Alergia(nombre, valor))
            else:
                self.alergiasSinNombre.append(nombre)
        elif valor:
            try:
                valor = int(valor)
                nombre = next((n for n, v in Alergia.
                               alergiasConocidas.items() if v == valor), None)
                if nombre:
                    self.alergiasRegistradas.append(Alergia(nombre, valor))
                else:
                    self.alergiasSinValor.append(valor)
            except ValueError:
                print("El valor debe ser un numero entero.")
        else:
            print("Debe proporcionar al menos un nombre o un valor.")
