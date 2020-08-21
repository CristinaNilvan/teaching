#include "ShapesDef.hpp"

int main (int argc, char const * argv[]) {

    TestingFunctionalities tests;
    Triangle triangle(3, 4);
    Square square(5);

    tests.TestGetAreaOfSquare (square);
    tests.TestGetPerimeterOfSquare (square);

    tests.TestGetAreaOfTriangle (triangle);
    tests.TestGetPerimeterOfTriangle (triangle);
}
