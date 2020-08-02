#include <iostream>

class numberProperties {

public:
  numberProperties () {}

  int getFibonacciNumber (int positionOfNumber);
  int getFactorialNumber (int positionOfNumber);

  virtual ~numberProperties () {}
};

int numberProperties::getFibonacciNumber (int positionOfNumber) {

  int result;

  if (positionOfNumber == 1) return 1;
  if (positionOfNumber == 2) return 1;

  result = getFibonacciNumber(positionOfNumber - 1) + getFibonacciNumber(positionOfNumber - 2);

  return result;
}

int numberProperties::getFactorialNumber (int positionOfNumber) {
  
  int result;

  if (positionOfNumber == 0) return 1;
  if (positionOfNumber == 1) return 1;

  result = positionOfNumber * getFactorialNumber(positionOfNumber - 1);

  return result;
}

class TestCases {

public:
  TestCases () {}

  void assertFibonacci (numberProperties properties);
  void assertFactorial (numberProperties properties);

  virtual ~TestCases () {}
};

void TestCases::assertFibonacci (numberProperties properties) {

  if (properties.getFibonacciNumber(7) == 13)
    std::cout << "Fibonacci test passed\n";
}

void TestCases::assertFactorial (numberProperties properties) {

  if (properties.getFactorialNumber (3) == 6)
    std::cout << "Factorial test passed\n";
}

int main(int argc, char const *argv[]) {

  numberProperties properties;
  TestCases cases;

  cases.assertFibonacci (properties);
  cases.assertFactorial (properties);

  return 0;
}
