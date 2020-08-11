#include "simple_example_def.hpp"

void oneDimensionalArray_IO::readOneDimensionaArrayObj (oneDimensionalArrayObj & array) {

  std::cin >> array.length;

  for (size_t iterator = 0; iterator < array.length; iterator++)
    std::cin >> array.oneDimensionalArray[iterator];
}

void oneDimensionalArray_IO::outputOneDimensionalArrayObj (oneDimensionalArrayObj array) {

  for (size_t iterator = 0; iterator < array.length; iterator++)
    std::cout << array.oneDimensionalArray[iterator] << " ";

  std::cout << '\n';
}

int oneDimensionalArrayProperties::getMaximumValueFromOneDimensionalArray (oneDimensionalArrayObj array) {

  int result = array.oneDimensionalArray[0];

  for (size_t iterator = 0; iterator < array.length; iterator++)
    if (result < array.oneDimensionalArray[iterator])
      result = array.oneDimensionalArray[iterator];

  return result;
}

bool oneDimensionalArrayProperties::checkExistingValueInOneDimensionalArray (oneDimensionalArrayObj array, int valueToSearch) {

  for (size_t iterator = 0; iterator < array.length; iterator++)
    if (valueToSearch == array.oneDimensionalArray[iterator])
      return true;

  return false;
}

void testCases::testGetMaximumValueFromOneDimensionalArray (oneDimensionalArrayObj array, oneDimensionalArrayProperties arrayPropertiesArgument) {

  if (arrayPropertiesArgument.getMaximumValueFromOneDimensionalArray(array) == 7)
    std::cout << "Test passed\n";
  else
    std::cout << "Test failed\n";
}

void testCases::testCheckExistingValueInOneDimensionalArray (oneDimensionalArrayObj array, oneDimensionalArrayProperties arrayPropertiesArgument) {

    if (arrayPropertiesArgument.checkExistingValueInOneDimensionalArray(array, 4) == true)
      std::cout << "Test passed\n";
    else
      std::cout << "Test failed\n";
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayObj array;
  oneDimensionalArray_IO arrayIO;
  oneDimensionalArrayProperties arrayProperties;
  testCases cases;

  arrayIO.readOneDimensionaArrayObj (array);
  arrayIO.outputOneDimensionalArrayObj (array);

  cases.testGetMaximumValueFromOneDimensionalArray (array, arrayProperties);
  cases.testCheckExistingValueInOneDimensionalArray (array, arrayProperties);

  return 0;
}
