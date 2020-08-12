class Palindrome:

    def __init__(self):
        pass


    def __reverse_number(self, number):

        reversed = 0

        while number > 0:
            digit = number % 10
            reversed = reversed * 10 + digit
            number //= 10

        return reversed


    def is_palindrome(self, number):

        if number == self.__reverse_number(self, number):
            return True

        return False


number_obj = Palindrome

print(number_obj.is_palindrome(number_obj, 1331))
