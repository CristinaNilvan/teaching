#include "clean_code_def_good_sample_recursively.hpp"

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

void assertFibonacci () {

  if (getFibonacciNumber(7) == 13)
    std::cout << "Fibonacci test passed\n";
}

void assertFactorial () {

  if (getFactorialNumber (3) == 6)
    std::cout << "Factorial test passed\n";
}

int main(int argc, char const *argv[]) {

  assertFibonacci ();
  assertFactorial ();

  return 0;
}
