class Shapes:

    def __init__(self):
        super(Shapes, self).__init__()

    def get_area(self):
        pass

    def get_perimeter(self):
        pass


class Square(Shapes):

    def __init__(self, length):
        super(Square, self).__init__()

        self.length = length

    def get_area(self):

        result = self.length ** 2

        return result

    def get_perimeter(self):

        result = 4 * self.length

        return result


square = Square(5)

print(square.get_area())
print(square.get_perimeter())
