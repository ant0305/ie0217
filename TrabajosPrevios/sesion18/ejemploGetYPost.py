import requests

# Se crea una variable payload(la carga)
payload = {'clave1': 'valor1', 'clave2': 'valor2'}

# Realiza una solicitud a la URL y se le envia la carga
response = requests.get('https://ejemplo.com/ruta', params=payload)
# Imprime el contenido de la respuesta en formato texto
print(response.text)

# Se crea una variable payload(la carga)
payload = {'usuario': 'juan', 'contrasena': 'secreta'}

# Realiza una solicitud a la URL y se le envia la carga
response = requests.post('https://ejemplo.com/login', data=payload)
# Imprime el contenido de la respuesta en formato texto
print(response.text)

# Se crea una variable payload(la carga)
payload = {'usuario': 'juan', 'contrasena': 'secreta'}

# Realiza una solicitud a la URL y se le envia la carga
# La carga se envia en formato json
response = requests.post('https://ejemplo.com/login', json=payload)
# Imprime el contenido de la respuesta en formato texto
print(response.text)
