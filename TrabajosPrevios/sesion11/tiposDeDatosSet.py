numbers = {2, 4, 6, 6, 2, 8} # Se crea un set de enteros
numbers2 ={11,12}
#Imprime {8, 2, 4, 6} porque no acepta datos repetidos
print(numbers) 
#Agregar un numero
numbers.add(32)
print(numbers) 
# Unir dos set
numbers.update(numbers2)
print(numbers)
# Eliminar un valor del set
eliminar = numbers.discard(11)
print(numbers)
print ("")

print ("Otro codigo:")
# Se crea un set de string
vowel_letters = {'a', 'e', 'i', 'o', 'u'} 
print('Vowel Letters:', vowel_letters)
# Se crea un set de datos mixtos
mixed_set = {'Hello', 101, -2, 'Bye'}
print('Set of mixed data types:', mixed_set)
# Diccionario vacio
empty_dic = { }
print(type(empty_dic))
# Set vacio
empty_set = set()
print(type(empty_set))
