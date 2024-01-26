def greet(name):
    # Funcion anidada
    def display_name():
        print("Hi", name)
# Se llama a la funcion interna
    display_name()


# Llamar a la funcion externa
greet("John")
# Salida: Hi Joh
print("")

print("Otro codigo:")


def greet():
    # Se define una variable
    name = "John"
# Se retorna un funcion
    return lambda: "Hi " + name


# Llamar a la funcion externa
message = greet()
# Se imprime el mensaje
print(message())
# Salida: Hi John
