#include <math.h>
#include <iostream>

class Shapes {

public:

    virtual int GetAreaOfShape () { return 0; }
    virtual int GetPerimeterOfShape () { return 0; }

};

class Square : public Shapes {

private:
    int length;

public:

    Square (int length);

    int GetAreaOfShape ();
    int GetPerimeterOfShape ();
};

Square::Square (int length) {
    
    this->length = length;
}

int Square::GetAreaOfShape () {

    int result;

    result = pow(this->length, 2);

    return result;
}

int Square::GetPerimeterOfShape () {
    
    int result;

    result = this->length * 4;

    return result;
}

class TestingFunctionalities {

public:
    TestingFunctionalities() {}

    void TestGetAreaOfShape (Square square);
    void TestGetPerimeterOfShape (Square square);

    ~TestingFunctionalities() {}
};

void TestingFunctionalities::TestGetAreaOfShape (Square square) {

    if (square.GetAreaOfShape() == 25)

        std::cout << "Test passed\n";
    else
    
        std::cout << "Test failed\n";
}

void TestingFunctionalities::TestGetPerimeterOfShape (Square square) {
    
    if (square.GetPerimeterOfShape() == 20)

        std::cout << "Test passed\n";
    else
    
        std::cout << "Test failed\n";
}