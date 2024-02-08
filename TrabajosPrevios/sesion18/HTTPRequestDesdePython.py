import requests
# Se realiza una solicitud Get a la URL seleccionada
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Muestra de que tipo es la respuesta
print("Tipo:", type(response))
# Imprime la respuesta
print("Respuesta:", response)
# Imprime el contenido de la respuesta en formato texto
print("Respuesta text:", response.text)
# Se imprime como un diccionario todo lo que venia en la respuesta
print("Respuesta:", response.__dict__)
