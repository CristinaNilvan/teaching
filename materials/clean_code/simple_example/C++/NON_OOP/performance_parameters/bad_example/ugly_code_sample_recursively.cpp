/*
  INFO: Simple ugly code example in C++ to bold the importance of clean code. (recursively which is often avoided due the bad "performance")
  SCOPE: Learning process.
*/

#include <iostream>
#include <chrono>

using namespace std::chrono;

int fibo(int n) {

  if (n==1 || n==2)
    return 1;
  else
    return fibo(n-1) + fibo(n-2);
}

int fact(int n) {

  if (n==0 || n==1)
    return 1;
  else
    return n * fact(n-1);
}

int main() {

  auto start = high_resolution_clock::now();

  fibo(40);

  auto stop = high_resolution_clock::now();

  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "Time taken by tasks: " << duration.count() << " milliseconds" << '\n';

  return 0;
}
