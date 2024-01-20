import math
def greet(): # Declarar la funcion
    print('Hello World!')
# Lamar la funcion
greet()

print('Outside function')
print ("")

print ("Otro codigo:")
# Definir funcion
def find_square(num):
    result = num * num
    return result
# Llamar funcion
square = find_square(3) 

print('Square:',square)
# Salida = 9
print ("")

print ("Otro codigo:")
# sqrt calcula la raiz cuadrada
square_root = math.sqrt(4)
print("Square Root of 4 is", square_root)
# pow() calcula la potencia 
power = pow(2, 3)
print("2 to the power 3 is",power)
print ("")

print ("Otro codigo:")
def add_numbers (a = 7, b = 8): 
    sum = a + b 
    print('Sum:', sum)
# Llama a la funcion con dos argumentos
add_numbers(2, 3)
# Llama a la funcion con un argumento 
add_numbers(a = 2)
# Llama a la funcion sin argumentso 
add_numbers()
print ("")

print ("Otro codigo:")
def display_info(first_name, last_name):
    print('First Name:', first_name)
    print('Last Name:', last_name)
# Se pasa la variable con el nombre respectivo
display_info(last_name = 'Cartman', first_name = 'Eric')
print ("")

print ("Otro codigo:")
# Programa para encontrar la suma de varios numeros
def find_sum(*numbers): # Se usa * para enviar una cantidad aleatoriade argumentos
    result = 0
    for num in numbers:
        result = result + num
    print("Sum = ", result)
# Llama a la funcion y le pasa 3 argumentos
find_sum(1, 2, 3)
# Llama a la funcion y le pasa 2 argumentos
find_sum(4, 9)
print ("")

print ("Otro codigo:")
def factorial(x):

    # Esta funcion recursiva encuentra el factorial de un numero 
    if x == 1:
        return 1
    else:
        return (x* factorial(x-1))
num = 3
print("The factorial of", num, "is", factorial(num))
print ("")

print ("Otro codigo:")
# lambda acepta argumentos
greet_user = lambda name: print('Hey there,', name)
# Llamar lambda
greet_user('Delilah')
# Salida: Hey there, Delilah
print ("")

print ("Otro codigo:")
# El programa muestra solo los elementos pares de una lista 
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
new_list = list(filter(lambda x: (x%2 == 0), my_list))
print(new_list)
# Salida: [4, 6, 8, 12]
print ("")

print ("Otro codigo:")
# El programa muestra caada elemento de la lista duplicado
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(map(lambda x: x * 2, my_list))

print(new_list)
# Salida: [2, 10, 8, 12, 16, 22, 6, 24]