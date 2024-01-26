import os
print(os.getcwd())
# Muestra los subdirectorios
os.listdir()
try:
    # Se enlistan los directorios de cualquier ubicacion
    os.listdir('G:\\')
except FileNotFoundError:
    print("Directorio no encontrado")
try:
    os.listdir()
    ['test']
    # renombrar un directorio
    os.rename('test', 'new_one')
    os.listdir()
    ['new_one']
except FileNotFoundError:
    print("El programa no puede encontrar el archivo")
