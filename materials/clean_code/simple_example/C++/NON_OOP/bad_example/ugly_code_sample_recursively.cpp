/*
  INFO: Simple ugly code example in C++ to bold the importance of clean code. (recursively which is often avoided due the bad "performance")
  SCOPE: Learning process.
*/

#include <iostream>

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
    return n + fact(n-1);
}

int main() {

  if (fibo(7)==13)
    std::cout << "Fibonacci test passed\n";

  if (fact(3)==6)
    std::cout << "Factorial test passed\n";

  return 0;
}
