import shapes

square = shapes.Square(5)
triangle = shapes.Triangle(3, 4)
tests = shapes.TestFunctionalities

tests.test_get_area_square(shapes.TestFunctionalities, square)
tests.test_get_perimeter_square(shapes.TestFunctionalities, square)

tests.test_get_area_triangle(shapes.TestFunctionalities, triangle)
tests.test_get_perimeter_triangle(shapes.TestFunctionalities, triangle)
