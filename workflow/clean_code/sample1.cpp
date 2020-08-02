#include <iostream>

bool isPrime (unsigned int number) {

  if (number == 2) return true;

  for (size_t divisor = 2; divisor <= number / 2 ; divisor++)
    if (number % divisor == 0) return false;

  return true;
}

unsigned int reverseNumber (unsigned int number) {

  unsigned int reversed = 0;

  while (number > 0) {

    reversed = reversed * 10 + number % 10;
    number = number / 10;
  }

  return reversed;
}

bool isPalindrome (unsigned int number) {

  unsigned int index = reverseNumber(number);

  if (index == number) return true;

  return false;
}

void assertPrime () {

  if (isPrime(11)) std::cout << "isPrime test one passed" << '\n';
  if (isPrime(12) == false) std::cout << "isPrime test two passed" << '\n';
}

void assertPalindrome () {

  if (isPalindrome(1221)) std::cout << "isPalindrome test one passed" << '\n';
  if (isPalindrome(123) == false) std::cout << "isPalindrome test two passed" << '\n';
}

int main(int argc, char const *argv[]) {

  assertPrime();
  assertPalindrome();

  return 0;
}
