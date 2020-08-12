#include <iostream>

class numberProperties {

public:
  numberProperties () {}

  int getFibonacciNumber (int positionOfNumber);
  int getFactorialNumber (int positionOfNumber);

  virtual ~numberProperties () {}
};

class TestCases {

public:
  TestCases () {}

  void assertFibonacci (numberProperties properties);
  void assertFactorial (numberProperties properties);

  virtual ~TestCases () {}
};
