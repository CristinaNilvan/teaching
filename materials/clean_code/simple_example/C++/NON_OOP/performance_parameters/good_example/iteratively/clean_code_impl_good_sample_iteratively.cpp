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

int main (int argc, char const *argv[]) {

  auto start = high_resolution_clock::now();

  for (size_t i = 0; i < 100000; i++)
    getFibonacciNumber(100);

  auto stop = high_resolution_clock::now();

  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "Time taken by tasks: " << duration.count() << " milliseconds" << '\n';

  return 0;
}
