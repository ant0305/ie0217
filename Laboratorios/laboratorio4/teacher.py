from person import Person


# Se crea una clase que hereda metodos y atributos de la clase persona
class Teacher(Person):
    # Se crea un inicializador
    def __init__(self, name, age, empleyee_id):
        # Se hereda esto de la clase persona
        super().__init__(name, age)
        # Se asigna el valor a empleyee_id
        self.empleyee_id = empleyee_id
        self.courses_taught = []

    # Se crea un metodo para agregar elementos a la lista
    def assign_course(self, course):
        self.courses_taught.append(course)

    # Se crea un metodo para mostrar informacion
    def display_info(self):
        # Se hereda esto de la clase persona
        super().display_info()
        print(f"Employee ID: {self.empleyee_id}\
             \nCourses taught: {', '.join(self.courses_taught)}\n")
