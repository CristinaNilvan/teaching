def get_fibonacci_number(position_of_number):

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


def get_factorial_number(position_of_number):

    position_of_number += 1
    result = 1

    for iterator in range(1, position_of_number, 1):
        result *= iterator

    return result


def assert_fibonacci():
    if get_fibonacci_number(7) == 13:
        print("Fibonacci test passed")


def assert_factorial():
    if get_factorial_number(3) == 6:
        print("Factorial test passed")


assert_fibonacci()
assert_factorial()
