#include <iostream>

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 1000
#endif

class oneDimensionalArrayObj {
private:
  int constant_rvalue = 0;

public:
  oneDimensionalArrayObj () {}

  int & length = constant_rvalue;
  int oneDimensionalArray[STANDARD_LENGTH];

  virtual ~oneDimensionalArrayObj () {}
};

class oneDimensionalArray_IO {

public:
  oneDimensionalArray_IO () {}

  void readOneDimensionaArrayObj (oneDimensionalArrayObj & array);
  void outputOneDimensionalArrayObj (oneDimensionalArrayObj array);

  virtual ~oneDimensionalArray_IO () {}
};

class oneDimensionalArrayProperties {

public:
  oneDimensionalArrayProperties () {}

  int getMaximumValueFromOneDimensionalArray (oneDimensionalArrayObj array);
  bool checkExistingValueInOneDimensionalArray (oneDimensionalArrayObj array, int valueToSearch);

  virtual ~oneDimensionalArrayProperties () {}
};

class testCases {

public:
  testCases () {}

  void testGetMaximumValueFromOneDimensionalArray (oneDimensionalArrayObj array, oneDimensionalArrayProperties arrayPropertiesArgument);
  void testCheckExistingValueInOneDimensionalArray (oneDimensionalArrayObj array, oneDimensionalArrayProperties arrayPropertiesArgument);

  virtual ~testCases () {}
};
