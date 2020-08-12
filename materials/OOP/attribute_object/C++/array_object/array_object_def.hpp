#include <iostream>

#ifndef STANDARD_LENGTH
#define STANDARD_LENGTH 1000
#endif

class OneDimensionalArrayObject {

public:

  int LengthOfArray;
  int OneDimensionalArray[STANDARD_LENGTH];

  OneDimensionalArrayObject (int LengthOfArray);

  virtual ~OneDimensionalArrayObject ();
};

class OneDimensionalArrayInputOutput {

public:
  OneDimensionalArrayInputOutput () {}

  void ReadOneDimensionalArray (OneDimensionalArrayObject & ArrayObject);
  void OutputOneDimensionalArray (OneDimensionalArrayObject ArrayObject);

  virtual ~OneDimensionalArrayInputOutput () {}
};
