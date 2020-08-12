#include "student_details_def.hpp"

StudentDetails::StudentDetails (std::string Name, int Age, std::string University) {

  this->Name = Name;
  this->Age = Age;
  this->University = University;
}

StudentDetails::~StudentDetails () {
  // pass
}

StudentDataQuery::StudentDataQuery () {
  // Pass
}

void StudentDataQuery::ShowStudentData (StudentDetails StudentObject) {

  LOG_DATA (StudentObject.Name);
  NEWLINE ();
  LOG_DATA (StudentObject.Age);
  NEWLINE ();
  LOG_DATA (StudentObject.University);
  NEWLINE ();
}

std::string StudentDataQuery::GetStudentName (StudentDetails StudentObject) {

  return StudentObject.Name;
}

int StudentDataQuery::GetStudentAge (StudentDetails StudentObject) {

  return StudentObject.Age;
}

std::string StudentDataQuery::GetStudentUniversity (StudentDetails StudentObject) {

  return StudentObject.University;
}

StudentDataQuery::~StudentDataQuery () {
  // pass
}

StudentDataManipulation::StudentDataManipulation () {
  // pass
}

void StudentDataManipulation::ChangeStudentName(StudentDetails & StudentObject, std::string NewName) {

  StudentObject.Name = NewName;
}

void StudentDataManipulation::ChangeStudentAge (StudentDetails & StudentObject, int NewAge) {

  StudentObject.Age = NewAge;
}

void StudentDataManipulation::ChangeStudentUniversity (StudentDetails & StudentObject, std::string NewUniversity) {

  StudentObject.University = NewUniversity;
}

StudentDataManipulation::~StudentDataManipulation () {
  // pass
}
