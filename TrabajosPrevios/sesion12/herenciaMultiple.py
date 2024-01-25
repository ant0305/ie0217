class Mammal:
    def mammal_info(self):
        print("Mammals can give direct birth.")
class WingedAnimal:
    def winged_animal_info(self):
        print("Winged animals can flap.")
class Bat(Mammal, WingedAnimal):# Hereda metodos de las dos clases
    pass
# Crea un objeto de la clase Bat
b1 = Bat()
b1.mammal_info()
b1.winged_animal_info()