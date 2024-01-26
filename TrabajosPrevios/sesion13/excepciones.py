try:
    numerator = 10
    denominator = 0
    # Dividiendo entre cero
    result = numerator/denominator
    print(result)
except ZeroDivisionError:
    # Salida:Error:Denominator cannot be 0.
    print("Error: Denominator cannot be 0.")
finally:
    print("This a finally block.")
print("")

print("Otro codigo:")
try:
    even_numbers = [2, 4, 6, 8]
    print(even_numbers[5])  # Intentanto acceder a un indice fuera de limite
except ZeroDivisionError:
    print("Denominator cannot be 0.")
except IndexError:
    print("Index Out of Bound.")
# Salida: Index Out of Bound
print("")

print("Otro codigo:")
# Programa para imprimir el reciproco de los numeros pares
try:
    num = int(input("Enter a number: "))
    assert num % 2 == 0
except AssertionError:  # Se atrapa el error si el numero no es par
    print("Not an even number!")
else:
    # No se considero la posibilidad que num=0
    # El programa es incapaz de manejar ese error.
    reciprocal = 1/num
    print(reciprocal)
print("")

print("Otro codigo:")


# Define una clase para atrapar una excepcion
class InvalidAgeException(Exception):
    "Raised when the input value is less than 18"
    pass


# Se declara una variable.
number = 18
try:
    input_num = int(input("Enter a number: "))
    if input_num < number:  # Se confirma que es mayor a 18
        # Si no es mayor a 18 se levanta esta excepcion.
        raise InvalidAgeException
    else:
        print("Eligible to Vote")
except InvalidAgeException:
    print("Exception occurred: Invalid Age")
print("")

print("Otro codigo:")


# Se define una clase error
class SalaryNotInRangeError(Exception):
    """
    Exception raised for errors in the input salary.
    Attributes:
    salary input salary which caused the error
    message -- explanation of the error
    """

    def __init__(self, salary, message="Salary is not in (5000, 15000) range"):
        self.salary = salary
        self.message = message
        # Se usa el metodo de la clase excepcion
        super().__init__(self.message)


salary = int(input("Enter salary amount: "))
if not 5000 < salary < 15000:
    # Si no esta en el rango requerido se levanta una excepcion
    raise SalaryNotInRangeError(salary)
