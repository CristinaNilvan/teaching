def get_fibonacci_number (position_of_number):

    if position_of_number == 1:
        return 1
    if position_of_number == 2:
        return 1

    result = get_fibonacci_number(position_of_number - 1) + get_fibonacci_number(position_of_number - 2);

    return result


def get_factorial_number (position_of_number):

    if position_of_number == 0:
        return 1
    if position_of_number == 1:
        return 1

    result = position_of_number * get_factorial_number(position_of_number - 1)

    return result


def assert_fibonacci():
    if get_fibonacci_number(7) == 13:
        print("Fibonacci test passed")


def assert_factorial():
    if get_factorial_number(3) == 6:
        print("Factorial test passed")


assert_fibonacci()
assert_factorial()
