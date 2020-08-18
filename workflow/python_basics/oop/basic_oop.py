class Student:

    def __init__(self, name, grade):
        self.name = name
        self.grade = grade

        name_piece = name.split(' ')
        self.first_name = name_piece[0]
        self.last_name = name_piece[-1]


    def get_first_name(self):
        return self.first_name


    def get_last_name(self):
        return self.last_name


    def get_grade(self):
        return self.grade


cristina = Student('Nilvan Cristina', 100)
oliviu = Student('Oliviu', 96.50)


print(cristina.get_first_name())
print(cristina.get_last_name())
print(cristina.get_grade())
