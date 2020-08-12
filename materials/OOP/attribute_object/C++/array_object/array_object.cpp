#include "array_object_def.hpp"

OneDimensionalArrayObject::OneDimensionalArrayObject (int LengthOfArray) {
  this->LengthOfArray = LengthOfArray;
}

void OneDimensionalArrayInputOutput::ReadOneDimensionalArray (OneDimensionalArrayObject & ArrayObject) {

  for (size_t iterator = 0; iterator < ArrayObject.LengthOfArray; iterator++)
    std::cin >> ArrayObject.OneDimensionalArray[iterator];
}

void OneDimensionalArrayInputOutput::OutputOneDimensionalArray (OneDimensionalArrayObject ArrayObject) {

  for (size_t iterator = 0; iterator < ArrayObject.LengthOfArray; iterator++)
    std::cout << ArrayObject.OneDimensionalArray[iterator] << " ";

  std::cout << '\n';
}

OneDimensionalArrayObject::~OneDimensionalArrayObject() {

}

int main(int argc, char const *argv[]) {

  OneDimensionalArrayObject ArrayObject (7);
  OneDimensionalArrayInputOutput ArrayIO;

  ArrayIO.ReadOneDimensionalArray (ArrayObject);
  ArrayIO.OutputOneDimensionalArray (ArrayObject);

  return 0;
}
