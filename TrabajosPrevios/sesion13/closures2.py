def calculate():
    num = 1

    def inner_func():
        nonlocal num
        num += 2
        return num
    return inner_func


# Llamar a la funcion externa
odd = calculate()
# Llamar a la funcion interna
print(odd())
print(odd())
print(odd())
print(odd())
print(odd())
print(odd())
# Llamar a la funcion interna otra vez
odd2 = calculate()
print(odd2())
print("")

print("Otro codigo:")


# Se declara la funcion principal
def make_multiplier_of(n):
    # Se declara la funcion anidada
    def multiplier(x):
        return x * n
    return multiplier  # Se retorna la funcion interna


# Mutiplicar por 3
times3 = make_multiplier_of(3)
# Ultiplicar por 5
times5 = make_multiplier_of(5)
# Salida: 27
print(times3(9))
# Salida: 15
print(times5(3))
# Salida: 30
print(times5(times3(2)))
