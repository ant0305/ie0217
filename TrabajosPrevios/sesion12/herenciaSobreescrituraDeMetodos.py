class Animal:
# Atributos y metodos de la clase padre
    name = ""
    def eat(self): 
        print("I can eat")
# Heredar de animal
class Dog(Animal):
# Sobreescribir el metodo
    def eat(self): 
        print("I like to eat bones")
# Crear un objeto de la subclase
labrador = Dog()
# Llamar al metodo eat()
labrador.eat()