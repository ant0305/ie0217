# Se crea un diccionario de strings con claves mixtas
capital_city = {"Nepal": "Kathmandu", "Italy": "Rome", "England": "London", 3 :'Paris', 'Canada' : 'Toronto'} 
print(capital_city)
# Se agrega un elemento al diccionario
capital_city['Japan'] = 'Tokio'
print(capital_city)
# Se acceden a los valores usando las llaves
print(capital_city[3])
print(capital_city['England'])
# Se elimina un elemento
del capital_city['Nepal']
print(capital_city)
# Se cambia el valor a una llave
capital_city['Canada'] = 'Ottawa'
print(capital_city)
print ("")

print ("Otro codigo:")
# El codigo prueba si existe alguna clave igual al parametro escrito.
squares = {1: 1, 3: 9, 5:25, 7:49, 9: 81} 

print(1 in squares) # Imprime True

print(2 not in squares) # Imprime True

# Se coloca un valor y no lo reconoce
print(49 in squares) # Imprime false
print ("")

print ("Otro codigo:")
# Iterando a traves del diccionario
squares = {1: 1, 3: 9,5:25, 7: 49, 9: 81} 
# Se imprimen los valores que contienen las claves
for i in squares:
    print(squares[i])