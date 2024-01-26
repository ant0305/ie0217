import os
print(os.getcwd())  # Muestra la direccion donde se encuentra
# Salida: C:\Program Files\PyScripter

try:
    # Cambia directorio
    os.chdir('C:\\Python33')
    print(os.getcwd())
    # Salida: C:\Pyth3on33
except FileNotFoundError:
    print("Archivo no encontrado")

os.mkdir('test')
os.listdir()
['test']

try:
    # Elimina un archivo
    os.remove("test2.txt")
except FileNotFoundError:
    print("Archivo no encontrado para borrar")

try:
    # Eliminar un directorio vacio
    os.rmdir("test")
except FileNotFoundError:
    print("Directorio no encontrado")
