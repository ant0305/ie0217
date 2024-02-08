import requests
# Se define la URL como variable
url = "https://www.google.com"
# Se realiza la solicitud a la URL
response = requests.get(url)
# Se imprime el contenido de la respuesta en formato texto
print(response.text)
