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

class Triangle : public Shapes {

private:
 int length;
 int width;

public:
  Triangle (int length, int width);

  int GetAreaOfShape ();
  int GetPerimeterOfShape ();
};

Triangle::Triangle (int length, int width) {

  this->length = length;
  this->width = width;
}

int Triangle::GetAreaOfShape () {

  int result = this->length * this->width;

  return result;
}

int Triangle::GetPerimeterOfShape () {

  int result = 2 * this->length + 2 * this->width;

  return result;
}

class TestingFunctionalities {

public:
    TestingFunctionalities() {}

    void TestGetAreaOfSquare (Square square);
    void TestGetPerimeterOfSquare (Square square);

    void TestGetAreaOfTriangle(Triangle triangle);
    void TestGetPerimeterOfTriangle (Triangle triangle);

    ~TestingFunctionalities() {}
};

void TestingFunctionalities::TestGetAreaOfSquare (Square square) {

    if (square.GetAreaOfShape() == 25)

        std::cout << "Test passed\n";
    else

        std::cout << "Test failed\n";
}

void TestingFunctionalities::TestGetPerimeterOfSquare (Square square) {

    if (square.GetPerimeterOfShape() == 20)

        std::cout << "Test passed\n";
    else

        std::cout << "Test failed\n";
}

void TestingFunctionalities::TestGetAreaOfTriangle(Triangle triangle) {

  if (triangle.GetAreaOfShape() == 12)

    std::cout << "Test passed\n";
  else

    std::cout << "Test failed\n";
}

void TestingFunctionalities::TestGetPerimeterOfTriangle (Triangle triangle) {

  if (triangle.GetPerimeterOfShape() == 14)

    std::cout << "Test passed\n";
  else

    std::cout << "Test failed\n";
}
