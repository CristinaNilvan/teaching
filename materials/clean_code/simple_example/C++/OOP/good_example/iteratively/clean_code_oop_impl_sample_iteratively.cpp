#include "clean_code_oop_def_sample_iteratively.hpp"

int numberProperties::getFibonacciNumber (int positionOfNumber) {

  int startPointValue = 0;
  int intermediateValue;
  int finalValue = 1;

  if (positionOfNumber == 0) return 0;

  for (size_t iterator = 2; iterator <= positionOfNumber; iterator++) {

    intermediateValue = startPointValue + finalValue;
    startPointValue = finalValue;
    finalValue = intermediateValue;
  }

  return finalValue;
}

int numberProperties::getFactorialNumber (int positionOfNumber) {

  int result = 1;

  for (size_t iterator = 1; iterator <= positionOfNumber; iterator++)
    result *= iterator;

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
