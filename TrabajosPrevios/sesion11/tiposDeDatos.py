import random
print(random.randrange(10, 20))
list1 = ['a', 'b', 'c', 'd', 'e']
# Obtener un elemento aleatorio de la lista
print(random.choice(list1))
# Se mezclan los elementos de la lista 
random.shuffle(list1)
# Se imprime la lista mezclada 
print(list1)
# Se imprime un elemento aleatorio 
print(random.random())

my_list = ['p','r', 'o','g','r','a', 'm', 'i','z']
# Se accede al primer elemento de la lista
print(my_list[0])
# Se imprimen los elementos del 2 al 4
print(my_list[2:5])
print(my_list)
# Se imprimen los elementos del 4 hasta el final
print(my_list[5:])
print(my_list)
# Se imprime toda la lista
print(my_list[:])
# Se agregan elementos a la lista
my_list.append('b')
print(my_list)
# Se cambia un elemento
my_list[2] = 'f'
print(my_list)
# Se elimina el ultimo elemento
del my_list[-1] # Si se quieren eliminar los primeros dos elementos = del my_list[0:2]
print(my_list)
# Se elimina un elemento pero sabiendo el nombre
my_list.remove('a')
print(my_list)

my_list2 =['gato', 'perro', 'oso']
# Unir dos listas
my_list.extend(my_list2)
print(my_list)
# Imprime la cantidad de elementos en la lista
print(len(my_list2))
# Verifica si hay un dato especificoen una lista
print('C' in my_list2)
# Se imprimen los elementos adentro de la lista
for my_list2 in my_list2:
    print(my_list2)
print ("")

print ("Otro codigo:")
# Diferentes tipos de tuplas
# Tupla vacia
my_tuple = ()
print(my_tuple) 
# Tupla con numeros enteros  
my_tuple = (1, 2, 3) 
print(my_tuple)
# Tupla con tipo de datos mixtos
my_tuple = (1, "Hello", 3.4) 
print(my_tuple)
# Tupla anidada
my_tuple = ("mouse", [8, 4, 6], (1, 2, 3)) 
print(my_tuple)
print ("")

print ("Otro codigo:")
message = 'Hola Amigos'
message2 = ' Adios'
# Imprime el datos en la posicion -3
print(message[-3])
# Imprime desde la posicion 1 hasta la 4
print(message[1:4])
# Se comparan dos strings
print(message==message2)
# Se unen dos strings
var = message + message2
print(var)
print ("")

print ("Otro codigo:")
# Se usa el \ para imprimir literalmente comillas dobles
example = "He said, \"What's there?\""
# # Se usa el \ para imprimir literalmente comillas simples
example = 'He said, "What\'s there?"'
print(example)
# Salida: He said, "What's there?"
print ("")

print ("Otro codigo:")
name = 'Cathy'
country = 'UK'
# Se imprimen las variables
print(f'{name} is from {country}')