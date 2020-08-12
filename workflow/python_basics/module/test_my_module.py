import my_module as m

class test_cases:

    def __init__(self):
        pass

    def test_elements_product(self, list_prop_object):

        if list_prop_object.get_elements_product() == 6:
            print("test passed")
        else:
            print("test failed")

    def test_minimum_of_the_list(self, list_prop_object):

        if list_prop_object.get_minimum_of_the_list() == 1:
            print("test passed")
        else:
            print("test failed")

teste = test_cases

cris = m.list_prop([1, 2, 3])

teste.test_elements_product(teste, cris)

teste.test_minimum_of_the_list(teste, cris)
