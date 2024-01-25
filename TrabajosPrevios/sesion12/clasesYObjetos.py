# Se dfine la clase
class Bike:
    name = ""
    gear = 0
# Se crea un objeto de la classe
bike1 = Bike()
# Se imprime esto por curiosidad
print(bike1)
print(bike1.name)
print(bike1.gear)
# Se acceden a los atributos y se asignan nuevos valores
bike1.gear = 11
bike1.name = "Mountain Bike"
print(f"Name: {bike1.name}, Gears: {bike1.gear} ")
print ("")

print ("Otro codigo:")
# Se define la clase
class Employee:
# Se define un atributo 
    employee_id = 0


# Se crean dos objetos de la clase
employee1 = Employee()
employee2 = Employee()
# Se accede al atributo
employee1.employee_id = 1001
print(f"Employee ID: {employee1.employee_id}")
# Se accede al atributo
employee2.employee_id = 1002
print(f"Employee ID: {employee2.employee_id}")
print ("")

print ("Otro codigo:")
# Se crea la clase
class Room:
    length = 0.0
    breadth = 0.0
    # Metodo para calcular el area
    def calculate_area(self): print("Area of Room =", self.length * self.breadth)

# Crea un objeto de la clase
study_room = Room()
# Le asigna valores a los atributos
study_room.length = 42.5
study_room.breadth = 30.8
# Accede al metodo de la clase
study_room.calculate_area()

print ("")

print ("Otro codigo:")
class Bike:
    nombre = ""
    # Funcion constructor
    def __init__(self, name = ""):
        self.nombre = name 

bike1 = Bike("El destructor")
print(bike1.nombre)
print ("")

print ("Otro codigo:")
class Point(object):
    x = 3
    y = 0
    def __new__ (cls,*args, **kwargs): 
        print("From new")
        print(cls)
        print(args)
        print(kwargs)
        # Crear el propio objeto
        obj = super().__new__(cls)
        return obj
    
    def __init__(self,x = 0, y = 0):
        print("From init")
        self.x = x
        self.y = y

var = Point(45,50)
print(var.y)
print(var.x)
print ("")

print ("Otro codigo:")
class SqPoint(Point):
    MAX_Inst = 4
    Inst_created = 0
    def _new_ (cls,*args, **kwargs):
        if (cls.Inst_created >= cls.MAX_Inst):
            raise ValueError("Cannot create more objects")
        cls.Inst_created += 1
        return super()._new_ (cls)

var = SqPoint(67,5)
print(var.MAX_Inst)
print(var.Inst_created)