class PowTwo:
    """
    Class to implement an iterator
    of powers of two
    """
    def __init__(self, max=0):
        self.max = max

    def __iter__(self):  # Inicializa el iterador
        self.n = 0
        return self

    def __next__(self):  # Devuleve el siguiente elemento de la secuencia
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result
        else:
            # Salta la excepcion cuando se terminan los elementos
            raise StopIteration


# Se crea un objeto
numbers = PowTwo(3)
# Se crea un iterador objeto
i = iter(numbers)
# Usar next para llegar al siguiente elemento iterador
print(next(i))  # Imprime 1
print(next(i))  # Imprime 2
print(next(i))  # Imprime 4
print(next(i))  # Imprime 8
print(next(i))  # Se levanta la excepcion
