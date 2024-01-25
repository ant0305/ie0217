class Course():
    # Se crea unn inicializador
    def __init__(self, course_code, course_name):
        # Se asigna un valor a course_code
        self.course_code = course_code
        # Se asigna un valor a course_name
        self.course_name = course_name

    # Se crea un metodo para imprimir informacion
    def display_info(self):
        print(f"Course code: {self.course_code}\
             \nCourse name: {self.course_name}\n")
