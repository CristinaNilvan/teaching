#include "clean_code_oop_def_sample_recursively.hpp"

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
