class SuperClass:
    def super_method(self): 
        print("Super Class method called")
# Definir la clase que se deriva  de la superclase 
class DerivedClass1(SuperClass): 
    def derived1_method(self): 
        print("Derived class 1 method called")
# Define la clase que hereda de la classe hija
class DerivedClass2(DerivedClass1):
    def derived2_method(self): 
        print("Derived class 2 method called")
# Crea un objeto de la clase DerivedClass2
d2 = DerivedClass2()
d2.super_method() # Salida: "Super Class method called"
d2.derived1_method() # Salida: "Derived class 1 method called"
d2.derived2_method() # Salida: "Derived class 2 method called"