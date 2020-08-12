#include "clean_code_def_good_sample_iteratively.hpp"

int getFibonacciNumber (int positionOfNumber) {

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

int getFactorialNumber (int positionOfNumber) {

  int result = 1;

  for (size_t iterator = 1; iterator <= positionOfNumber; iterator++)
    result *= iterator;

  return result;
}

void assertFibonacci () {

  if (getFibonacciNumber(7) == 13)
    std::cout << "Fibonacci test passed\n";
}

void assertFactorial () {

  if (getFactorialNumber (3) == 6)
    std::cout << "Factorial test passed\n";
}

int main (int argc, char const *argv[]) {

  assertFibonacci ();
  assertFactorial ();

  return 0;
}
