class Student:

    def __init__(self, nume, prenume, nota_1, nota_2):
        self.nume = nume
        self.prenume = prenume
        self.nota_1 = nota_1
        self.nota_2 = nota_2

    def returneaza_nume(self):
        return self.nume

    def returneaza_prenume(self):
        return self.prenume

    def returneaza_media(self):
        media = (self.nota_1 + self.nota_2) / 2
        return media

#cristina = Student("Nilvan", "Cristina", 10, 9)

#print(cristina.returneaza_nume())
#print(cristina.returneaza_prenume())
#print(cristina.returneaza_media())
