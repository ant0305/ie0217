number = 10
# Comprueba si la condicion se cumple.
if number > 0:
    print('Number is positive.')
    print('The if statement is easy')
print ("")

print ("Otro codigo:")
number = 0
# Comprueba si la condicion se cumple.
if number > 0:
    print("Positive number")
# Si no se cumple pasa aqui 
elif number == 0:
    print('Zero')
# Si no se cumple ninguna pasa aqui
else:
    print('Negative number')
print('This statement is always executed')