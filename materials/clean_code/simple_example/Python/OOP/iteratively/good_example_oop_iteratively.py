class number_properties():
    """docstring for number_properties."""

    def get_fibonacci_number(self, position_of_number):

        position_of_number += 1

        start_point_value = 0
        final_value = 1

        if position_of_number == 0:
            return 0

        for iterator in range(2, position_of_number, 1):

            intermediate_value = start_point_value + final_value
            start_point_value = final_value
            final_value = intermediate_value

        return final_value


    def get_factorial_number(self, position_of_number):

        position_of_number += 1
        result = 1

        for iterator in range(1, position_of_number, 1):
            result *=  iterator

        return result


class test_cases():
    """docstring for test_cases."""

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
