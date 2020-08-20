#include "ShapesDef.hpp"

int main (int argc, char const * argv[]) {

    TestingFunctionalities tests;
    Square square(5);

    tests.TestGetAreaOfShape (square);
    tests.TestGetPerimeterOfShape (square);
    
} 