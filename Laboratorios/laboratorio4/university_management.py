from student import Student
from teacher import Teacher
from course import Course
# Se crea un objeto estudiante y se le asignan valores
student1 = Student("Esteban", 43, "B30754")
# Se crea un objeto estudiante y se le asignan valores
student2 = Student("Maria", 28, "B93747")
# Se crea un objeto teacher y se le asignan valores
teacher1 = Teacher("Jorge Romero", 65, "12345")
# Se crea un objeto teacher y se le asignan valores
teacher2 = Teacher("Luis Diego", 61, "937584")
# Se crea un objeto curso y se le asignan valores
course1 = Course("IE0217", "DSA")
# Se crea un objeto curso y se le asignan valores
course2 = Course("IE0323", "CD1")
# Se le asignan los cursos a estudiante 1
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)
# Se le asigna el curso a teacher1
teacher1.assign_course(course1.course_code)
# Se le asigna el curso a teacher2
teacher2.assign_course(course2.course_code)
# Se llama al metodo para imprimir
student1.display_info()
# Se llama al metodo para imprimir
teacher1.display_info()
# Se llama al metodo para imprimir
course1.display_info()
