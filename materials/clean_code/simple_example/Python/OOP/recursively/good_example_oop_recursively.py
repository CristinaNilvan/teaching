class number_properties():
    """docstring for number_properties."""

    def __init__ (self):
        pass


    def get_fibonacci_number(self, position_of_number):

        if position_of_number == 1:
            return 1
        if position_of_number == 2:
            return 1

        result = self.get_fibonacci_number(self, position_of_number - 1) + self.get_fibonacci_number(self, position_of_number - 2)

        return result


    def get_factorial_number(self, position_of_number):

        if position_of_number == 0:
            return 1
        if position_of_number == 1:
            return 1

        result = position_of_number * self.get_factorial_number(self, position_of_number - 1)

        return result

class test_cases():
    """docstring for test_cases."""

    def __init__ (self):
        pass


    def assert_fibonacci(self, properties):
        if properties.get_fibonacci_number(properties, 7) == 13:
            print("Fibonacci test passed")


    def assert_factorial(self, properties):
        if properties.get_factorial_number(properties, 3) == 6:
            print("Factorial test passed")

properties = number_properties
cases = test_cases

cases.assert_fibonacci(cases, properties)
cases.assert_factorial(cases, properties)
