# Usa un ciclo for para imprimir varios numeros
for i in range(5):
    if i == 3:
        break# Cuando llega a 3 pasa al break que lo saca del ciclo
    print(i)
print ("")

print ("Otro codigo:")
# Usa un ciclo for para imprimir varios numeros
for i in range(5):
    if i == 3:
        # Cuando llega al 3 simplemente no lo imprime pero no sale del ciclo
        continue
    print(i)
print ("")

print ("Otro codigo:")
# El programa imprime los primeros 5 numeros de la tabla del 5
i = 1
while i <= 10:
    print('6 * ',(i), '=',6 * i)
    if i >= 5:
        break
    i = i + 1
print ("")

print ("Otro codigo:")
# El programa imprime numero impara del 1 al 10
num = 0
while num < 10:
    num += 1
    if (num % 2) == 0:
        continue
    print(num)
print ("")

print ("Otro codigo:")
n = 10
# Se usa pass dentro de la declaracion if, para no hacer nada
if n > 10:
    pass
print('Hello')