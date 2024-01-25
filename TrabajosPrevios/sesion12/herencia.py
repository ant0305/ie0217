class Animal:
# Atributos y metodos de la clase base
    name = ""
    def eat(self): 
        print("I can eat")
# Heredar de animal
class Dog(Animal):
# Nuevo metodo de la clase hija
    def display(self):
# Acceder a los atributos de la clase base
        print("My name is ", self.name)
# Crear un objeto de la subclase 
labrador = Dog()
# Acceso a los metodos y atributos de la clase base
labrador.name = "Rohu" 
labrador.eat()
# Lamar al metodo de la clase hija
labrador.display()