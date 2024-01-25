class Animal:
    name = ""
    def eat(self): print("I can eat")
# Heredar de la clase animal 
class Dog(Animal):
    # Sobreescribir el metodo eat()
    def eat(self):
    # Llama al metodo eat() de la clase padre 
        super().eat()
    print("I like to eat bones")
# Crea un objeto de la subclase
labrador = Dog()
labrador.eat()