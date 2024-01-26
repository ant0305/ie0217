def smart_divide(func):
    # Se declara una funcion interna
    def inner(a, b):
        print("\nI am going to divide", a, "and", b)
        if b == 0:
            print("Whoops! cannot divide")
            return
        return func(a, b)
    # Se retorna la funcion anidada
    return inner


# Sintaxis para decorar la funcion
@smart_divide
# Se declara la funcion divide
def divide(a, b):
    print(a/b)


# Llamar a la funcion decorada
divide(2, 5)
divide(2, 0)
