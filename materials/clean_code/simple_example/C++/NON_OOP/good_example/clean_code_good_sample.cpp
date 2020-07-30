/*
  INFO: Simple clean code example in C++ without TDD or any exception handler.
  SCOPE: Learning process.
*/

#include <iostream>

int getFibonacciNumber (int positionOfNumber) {

  if (positionOfNumber == 1) return 1;
  if (positionOfNumber == 2) return 1;

  return getFibonacciNumber(positionOfNumber - 1) + getFibonacciNumber(positionOfNumber - 2);
}

int getFactorialNumber (int positionOfNumber) {

  if (positionOfNumber == 0) return 1;
  if (positionOfNumber == 1) return 1;

  return positionOfNumber * getFactorialNumber(positionOfNumber - 1);
}

void assertions () {

  if (getFibonacciNumber(7) == 13)
    std::cout << "Fibonacci test passed;\n";

  if (getFactorialNumber(3) == 6)
    std::cout << "Factorial test passed;\n";
}

int main(int argc, char const *argv[]) {

  assertions ();

  return 0;
}
