integer_number = 123
float_number = 1.23
new_number = integer_number + float_number
# Mostrar el nuevo valor y el tipo de datos resultante
print("Value:",new_number); 
print("Data Type:", type(new_number))
print ("")

print ("Otro codigo:")
num_string = '12'
num_integer = 23
print("Data type of num string before Type Casting:",type(num_string))
# Conversion de tipo explicita para poder hacer la operacion
num_string = int(num_string)
print("Data type of num string after Type Casting:", type(num_string))
num_sum = num_integer + num_string
print("Sum:",num_sum)
print("Data type of num_sum:",type(num_sum))