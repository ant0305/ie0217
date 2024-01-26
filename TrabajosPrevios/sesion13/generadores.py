def my_generator(n):
    # Se inicializa un contador
    value = 0
    # Bucle hasta que el contador sea menor a n
    while value < n:
        # Producir el valor actual del contador
        yield value
    # Incrementar el contador
        value += 1


# Iterador sobre el objeto iterador producido por my_generator
for value in my_generator(3):
    # Se imprimen los valores producidos por el generador
    print(value)
