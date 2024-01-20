"""Los siguientes codigos muestan la forma en la 
que se pueden declara variables en python"""
def greet():
# Variable local
    message = 'Hello'
    print('Local', message)

greet()
#print(message) da error porque la variable message no es global
# Intenta acceder a la variable afuera de la funcion
print ("")

print ("Otro codigo:")
# Declara la variable global 
message = 'Hello'

def greet(): 
    # Declara la variable local
    print('Local', message)
    
greet() # Se llama a la funcion
print('Global', message)
print ("")

print ("Otro codigo:")
# Funcion exterior 
def outer():
    message = 'local'
# Funcion anidada 
    def inner():
# Declara variable no local 
        nonlocal message
        message = 'nonlocal' 
        print("inner:", message)
    inner() 
    print("outer:", message)
outer()
print ("")

print ("Otro codigo:")
def outer_function(): # Funcion exterior
    num = 20

    def inner_function():
        global num # Se declara una variable global
        num = 25
    print("Before calling inner_function(): ", num) 
    inner_function()
    print("After calling inner_function(): ", num) 

outer_function()
print("Outside both function:", num)