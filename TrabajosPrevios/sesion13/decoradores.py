def add(x, y):
    return x + y


def calculate(func, x, y):  # Se pasa una funcion como argumento
    # Se retorna la funcion que se paso como argumento
    return func(x, y)


result = calculate(add, 4, 6)
print(result)  # Imprime: 10
print("")

print("Otro codigo:")


def make_pretty(func):

    # Se define una funcion interna
    def inner():
        # Se agrega alguna caracteristica extra
        print("I got decorated")
# Se llama a la funcion original
        func()
# Devolver la funcion interna
    return inner


# Definir funcion ordinaria
def ordinary():
    print("I am ordinary")


# Decorar la funcion ordinaria
decorated_func = make_pretty(ordinary)
# Llamar a la funcion decorada
decorated_func()
print("")

print("Otro codigo:")


def make_pretty(func):
    # Funcion interna
    def inner():
        print("I got decorated")
        # Se llama a la funcion ordinaria
        func()
    return inner  # Se retorna la funcion anidada


# Sintaxis especial para decorar la funcion
@make_pretty
# Se declara la funcion ordinaria
def ordinary():
    print("I am ordinary")


# Llamar a la funcion decorada
ordinary()
