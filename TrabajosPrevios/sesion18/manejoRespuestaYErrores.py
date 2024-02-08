import requests

# Se realiza una solicitud a la URL seleccionada
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Imprime si la solicitud se realizo correctamente o hubo un error
print(response.status_code)
# Imprime los encabezados de la respuesta
print(response.headers)
# Se verifica si la respuesta es en formato json
print(response.json())

try:
    # Se intanta hacer una solicitud a la URL
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    # Si no se hace la solicitud corretamente genera una excepcion
    response.raise_for_status()
    # Imprime el contenido de la respuesta en formato texto
    print(response.text)
except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")
