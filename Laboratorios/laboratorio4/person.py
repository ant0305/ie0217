class Person:
    # Se elabora el inicializador
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Se crea un metodo para mostrar informacion
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")
