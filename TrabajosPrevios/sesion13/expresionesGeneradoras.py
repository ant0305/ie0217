# Crear un objeto generador
squares_generator = (i * i for i in range(5))
# Iterar sobre el generador e imprimir los valores
for i in squares_generator:
    print(i)
print("")

print("Otro codigo:")


# Funcion para generar los numeros de fibonacci
def fibonacci_numbers(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x+y  # Se actualizan los valores de las variables
        yield x  # Se devuelve el numero actual


# Funcion para generar el cuadrado de los numeros
def square(nums):
    for num in nums:
        yield num**2  # Se genera el cuadrado de cada numero


print(sum(square(fibonacci_numbers(10))))
# Salida: 4895
