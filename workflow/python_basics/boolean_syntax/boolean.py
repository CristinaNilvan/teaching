def is_prime(number):

    if number == 2:
        return True

    for divisor in range(2, number // 2):
        if number % divisor == 0:
            return False

    return True


def reverse_number(number):

    reversed = 0

    while number > 0:
        digit = number % 10
        reversed = reversed * 10 + digit
        number //= 10

    return reversed


def is_palindrome(number):

    if number == reverse_number(number):
        return True

    return False


print(is_prime(2))
print(is_palindrome(13))
