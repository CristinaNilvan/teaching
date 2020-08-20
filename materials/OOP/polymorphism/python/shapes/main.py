import shapes

square = shapes.Square(5)
tests = shapes.TestFunctionalities

tests.test_get_area(shapes.TestFunctionalities, square)
tests.test_get_perimeter(shapes.TestFunctionalities, square)