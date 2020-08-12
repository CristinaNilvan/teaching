import file_1_oop

class Testare:

    def __init__(self):
        pass

    def testare_nume(self, elev):
        if elev.returneaza_nume() == "Nilvan":
            print("passed")
        else:
            print("failed")

    def testare_prenume(self, elev):
        if elev.returneaza_prenume() == "Cristina":
            print("passed")
        else:
            print("failed")

    def testare_media(self, elev):
        if elev.returneaza_media() == 9.5:
            print("passed")
        else:
            print("failed")

cristina = file_1_oop.Student("Nilvan", "Cristina", 10, 9)

test = Testare

test.testare_nume(test, cristina)
test.testare_prenume(test, cristina)
test.testare_media(test, cristina)
