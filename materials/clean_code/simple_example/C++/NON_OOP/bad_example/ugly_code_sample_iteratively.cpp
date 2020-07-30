/*
  INFO: Simple ugly code example in C++ to bold the importance of clean code. (iteratively which is more often use due the "performance" achieved)
  SCOPE: Learning process.
*/

#include <iostream>

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

  if (fibo(7)==13)
    std::cout << "Fibonacci test passed\n";

  if (fact(3)==6)
    std::cout << "Factorial test passed\n";

  return 0;
}
