try:
    # Abrir archivo
    file1 = open("test.txt", "r")
except FileNotFoundError:
    print("Archivo no encontrado")
else:
    # Leer archivo
    read_content = file1.read()
    print(read_content)
    # Cerrar archivo
    file1.close()
print("")

print("Otro código:")
with open('test2.txt', 'w') as file2:
    # Escribe el contenido en el archivo test2.txt
    file2.write('Programming is Fun.')
