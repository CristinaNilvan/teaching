class student_details:

    def __init__(self, name, age, university):
        super(student_details, self).__init__()

        self.name = name
        self.age = age
        self.university = university


class student_data_query:

    def __init__(self, arg):
        super(student_data_manipulation, self).__init__()


    def show_student_data(self, student_object):
        print(student_object.name)
        print(student_object.age)
        print(student_object.university)


    def get_student_name(self, student_object):

        return student_object.name


    def get_student_age(self, student_object):

        return student_object.age


    def get_student_university(self, student_object):

        return student_object.university


class student_data_manipulation:

    def __init__(self):
        super(student_data_manipulation, self).__init__()


    def change_student_name(self, student_object, new_name):

        student_object.name = new_name


    def change_student_age(self, student_object, new_age):

        student_object.age = new_age


    def change_student_university(self, student_object, new_university):

        student_object.university = new_university
