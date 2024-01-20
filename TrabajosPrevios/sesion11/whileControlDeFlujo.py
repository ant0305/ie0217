# El programa muestra los numeros del 1 al 5
# Se inicializan las variables
i = 1
n = 5
# Se usa un bucle para recorrer el intervalo
while i <= n:
    print(i)
    i = i + 1
print ("")

print ("Otro codigo:")
# Programa para sumar
# Hasta que el usuario ingrese cero
total = 0
number = int(input('Enter a number: '))
# Sumar hasta que el numero sea cero
while number != 0:
    total += number #total = total + number
    # Preguntar el numero otra vez
    number = int(input('Enter a number: '))
print('total =', total)
print ("")

print ("Otro codigo:")
counter = 0
# Bucle para iterar en una variable e imprimir algo 
while counter < 3:
    print('Inside loop')# Imprimir en la terminal
    counter = counter + 1# Aumentar en uno la variable
else:
    print('Inside else')# Imprime esto cuando la condiccion del bucle no se cumple
print ("")

print ("Otro codigo:")
age = 32
# La condicion de prueba siempre es veradera
while age > 18:
    print('You can vote')
    age-= 1# Se le agrego esta linea para romper el codigo