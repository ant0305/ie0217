# El for recorre la palabra y la imprime letra por letra
for x in 'Python': 
    print(x)
print ("")

print ("Otro codigo:")
# Se usa range para definir un rango de valores
values = range(4)
# itera de i = 0 a i = 3
for i in values:
    print(i)
print ("")

print ("Otro codigo:")
languages = ['Swift', 'Python', 'Go']
# Se usa este simbolo _ porque no se necesita los valores almacenados en la variable
for _ in languages:
    print('Hello')
    print('Hi')
print ("")

print ("Otro codigo:")
# Se usa el else para asegurarse que se imprimieron todos los datos
digits = range(3)
for i in digits:# Itera los valores que tiene digits
    print(i)
else:
    print("No items left.")