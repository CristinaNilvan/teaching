from math import pi

class Shape:

    def __init__(self, name):
        self.name = name


    def get_area(self):
        pass


    def get_perimeter(self):
        pass


class Circle(Shape):

    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius

    def get_area(self):
        return pi * pow(self.radius, 2)


    def get_perimeter(self):
        return 2 * pi * self.radius

 
class Square(Shape):

    def __init__(self, side):
        super().__init__("Square")
        self.side = side

    def get_area(self):
        return pow(self.side, 2)


    def get_perimeter(self):
        return 4 * self.side


circle = Circle(4)
square = Square(5)

print(circle.get_area())
print(circle.get_perimeter())


print(square.get_area())
print(square.get_perimeter())
