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

int main(int argc, char const *argv[]) {

  auto start = high_resolution_clock::now();

  getFibonacciNumber(40);
  
  auto stop = high_resolution_clock::now();

  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "Time taken by tasks: " << duration.count() << " milliseconds" << '\n';

  return 0;
}
