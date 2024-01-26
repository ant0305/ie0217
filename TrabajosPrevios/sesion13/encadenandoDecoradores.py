def star(func):
    # Se declara una funcion interna
    def inner(*args, **kwargs):
        print("*" * 15)  # Imprime la linea de astericos
        func(*args, **kwargs)  # Llama a la funcion printer
        print("*" * 15)  # Imprime la linea de asteriscos
    # Se retorna la funcion anidada
    return inner


# Se declara una funcion para decorar
def percent(func):
    # Se declara una funcion interna
    def inner(*args, **kwargs):
        print("%" * 15)  # Imprime la linea de porcentajes
        func(*args, **kwargs)  # Llama a la funcion printer
        print("%" * 15)  # Imprime la linea de porcentajes
    # Se retorna la funcion anidada
    return inner


# Sintaxis para decorar la funcion printer
# Se encadenan las funciones para decorar
@star
@percent
def printer(msg):
    print(msg)


# Se imprime la funcion decorada
printer("Hello")
