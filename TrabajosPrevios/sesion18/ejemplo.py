import requests

# Se realiza una solicitud a la URL seleccionada(datos usuario)
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
# Se almacenan los datos de la solicitud realizada
users_data = users_response.json()

# Se realiza una solicitud a la URL seleccionada(datos publicaciones)
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
# Se almacenan los datos de la solicitud realizada
posts_data = posts_response.json()

# Se alamcenan las publicacion de cada usuario en un diccionario
user_posts = {}
# Se crea un key en el diccionario para cada usuario
for user in users_data:
    user_posts[user['id']] = []
# Itera sobre cada post y asigna una publicacion al usuario correspondiente
for post in posts_data:
    # Extraer el id del usuario asociado a la publicacion para evitar KeyError
    user_id = post.get('userId')
    if user_id in user_posts:
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Itera sobre user_posts para imprimir las publicaciones de cada usuario
for user_id, posts in user_posts.items():
    # Busca al usuario correspondiente utilizando su id
    user = next((user for user in users_data if user['id'] == user_id), None)
    if user:
        # Imprimir las publicaciones de cada usuario ademas del nombre e imail
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    else:
        # Mensaje de error si no encuentra al usuario con el id correspondiente
        print(f"No se encontraron datos para el usuario con ID {user_id}")
