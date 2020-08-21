class Square:

    def __init__(self, length):
        super(Square, self).__init__()
        self.length = length

    def get_area (self):

        result = self.length ** 2

        return result

    def get_perimeter (self):

        result = self.length * 4

        return result

class Triangle:

    def __init__(self, length, width):
        super(Triangle, self).__init__()
        self.length = length
        self.width = width

    def get_area (self):

        result = self.length * self.width

        return result

    def get_perimeter (self):

        result = 2 * self.length + 2 * self.width

        return result


class TestFunctionalities:

    def __init__(self):
        super(TestFunctionalities, self).__init__()

    def test_get_area_square (self, square):

        if square.get_area() == 25:
            print("Test Passed")
        else:
            print("Test Failed")

    def test_get_perimeter_square (self, square):

        if square.get_perimeter() == 20:
            print("Test Passed")
        else:
            print("Test Failed")

    def test_get_area_triangle (self, triangle):

        if triangle.get_area () == 12:
            print("Test Passed")

        else:
            print("Test Failed")

    def test_get_perimeter_triangle (self, triangle):

        if triangle.get_perimeter () == 14:
            print("Test Passed")

        else:
            print("Test Failed")
