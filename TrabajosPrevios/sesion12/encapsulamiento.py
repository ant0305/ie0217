class Person:
    def __init__(self, name, age):
        self.name = name # publico
        self.age = age # publico

var = Person("hola", 20)
print("{},{}".format(var.name,var.age))

class Person2:
    def __init__(self, name, age):
        self._name = name # protegido
        self._age = age # protegido

var2 = Person2("hola2", 22)
print("{},{}".format(var2._name,var2._age))


class Person3:
    def __init__(self, name, age):
        self.__name = name # privado
        self.__age = age # privado
        print("{},{}".format(name,age))

# El codigo de abajo da error porque los atributos son privados
# var3 = Person3("hola4", 24)
# print("{},{}".format(var3.__name,var3.__age))
