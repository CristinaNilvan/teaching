/*
  INFO: Simple clean code example in C++ without TDD or any exception handler. (In a iteratively way which is fine)
  SCOPE: Learning process.
*/

#include <iostream>

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

void assertions () {

  if (getFibonacciNumber(7) == 13)
    std::cout << "Fibonacci test passed\n";

  if (getFactorialNumber (3) == 6)
    std::cout << "Factorial test passed\n";
}

int main (int argc, char const *argv[]) {

  assertions ();

  return 0;
}
