/*
  INFO: Simple clean code example in C++ without TDD or any exception handler. (In a recursive way which I consider the best)
  SCOPE: Learning process.
*/

#include <iostream>

int getFibonacciNumber (int positionOfNumber) {

  int result;

  if (positionOfNumber == 1) return 1;
  if (positionOfNumber == 2) return 1;

  result = getFibonacciNumber(positionOfNumber - 1) + getFibonacciNumber(positionOfNumber - 2);

  return result;
}

int getFactorialNumber (int positionOfNumber) {

  int result;

  if (positionOfNumber == 0) return 1;
  if (positionOfNumber == 1) return 1;

  result = positionOfNumber * getFactorialNumber(positionOfNumber - 1);

  return result;
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
