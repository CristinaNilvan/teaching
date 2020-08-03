/*
  INFO: Simple ugly code example in C++ to bold the importance of clean code. (iteratively which is more often use due the "performance" achieved)
  SCOPE: Learning process.
*/

#include <iostream>
#include <chrono>

using namespace std::chrono;

int fibo(int n) {

  int aux1=0, aux2=1, aux3;

  if (n==0) return aux1;

  for (int i=2;i<=n;i++) {
    aux3=aux1 + aux2;
    aux1 = aux2;
    aux2 = aux3;
  }
  return aux2;
}

int fact(int n) {

  int p = 1;

  for (int i=1;i<=n;i++)
    p *= i;

  return p;
}

int main() {

  auto start = high_resolution_clock::now();

  for (size_t i = 0; i < 100000; i++)
    fibo(100);
    
  auto stop = high_resolution_clock::now();

  auto duration = duration_cast<milliseconds>(stop - start);

  std::cout << "Time taken by tasks: " << duration.count() << " milliseconds" << '\n';

  return 0;
}
