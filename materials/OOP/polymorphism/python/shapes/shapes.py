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


class TestFunctionalities:

    def __init__(self):
        super(TestFunctionalities, self).__init__()

    def test_get_area (self, square):

        if square.get_area() == 25:
            print("Test Passed")
        else:
            print("Test Failed")

    def test_get_perimeter(self, square):

        if square.get_perimeter() == 20:
            print("Test Passed")
        else:
            print("Test Failed")

