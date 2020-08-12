from my_module import number_prop

class test:

    def __init__(self):
        pass

    def assert_factorial_number(self, object):

        if object.get_factorial_number() == 6:
            print("passed")
        else:
            print("failed")

numar = number_prop(3)

teste = test

teste.assert_factorial_number(teste, numar)
