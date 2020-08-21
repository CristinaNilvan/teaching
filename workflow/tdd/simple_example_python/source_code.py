class NumberProperties:

    def __init__(self, number):
        super(NumberProperties, self).__init__()
        self.number = number

    def is_prime(self):

        if self.number == 2:
            return True

        for iterator in range(2, self.number // 2, 1):
            if self.number % iterator == 0:
                return False

        return True

    def is_even(self):

        if self.number % 2 == 0:
            return True

        return False
