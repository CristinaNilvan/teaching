class list_prop:

    def __init__(self, lista):
        self.lista = lista

    def get_elements_product(self):

        product = 1

        for item in self.lista:
            product *= item

        return product

    def get_minimum_of_the_list(self):

        result = self.lista[0]

        for item in self.lista:
            if item < result:
                result = item

        return result


class number_prop:

    def __init__(self, number):
        self.number = number

    def get_factorial_number(self):

        if self.number == 0:
            return 1

        result = 1

        for item in range(1, self.number + 1):
            result *= item

        return result
