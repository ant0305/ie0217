from person import Person


# Se crea una clase que herdad metodos y atributos de la clase Person
class Student(Person):
    # Se crea un inicializador
    def __init__(self, name, age, student_id):
        # Se hereda esto de la clase persona
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []

    # Se crea un metodo para agregar elementos a la lista
    def enroll_course(self, course):
        self.courses.append(course)

    # Se crea un metodo para mostrar informacion
    def display_info(self):
        super().display_info()  # Se hereda esto de la clase persona
        print(f"Student ID: {self.student_id}\
             \nCourses: {', '.join(self.courses)}\n")
