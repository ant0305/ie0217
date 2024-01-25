class Polygon:
    def __init__(self, no_of_sides):
        self.n = no_of_sides # Se define una variable
        self.sides = [0 for i in range(no_of_sides)] # Crea una lista equivvalente al numero de lados
    def inputSides(self):
        # Se ingresan las medidas de los lados del poligono
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]
    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is", self.sides[i])

class Triangle(Polygon):# Herea de la clase poligono
    def init__(self):
        Polygon.__init__(self,3)# Hereda de la clase poligono
    def findArea(self):
        a, b, c = self.sides
        # Calcula el semiperimetro
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('The area of the triangle is %0.2f' %area)


# Creando una instancia de la clase triangulo 
t = Triangle(3)
# Se solicita al usuario que ingrese los lados
t.inputSides()
# Mostrando los lados del triangulo
t.dispSides()
# Calcular e imprimir el area del triangulo
t.findArea()