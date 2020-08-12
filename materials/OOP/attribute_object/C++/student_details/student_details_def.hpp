#include <iostream>

#ifndef LOG_DATA
#define LOG_DATA(Data) std::cout << Data << " ";
#endif

#ifndef NEWLINE
#define NEWLINE() std::cout << '\n';
#endif

class StudentDetails {

public:
  std::string Name;
  int Age;
  std::string University;

  StudentDetails (std::string Name, int Age, std::string University);


  virtual ~StudentDetails ();
};

class StudentDataQuery {

public:
  StudentDataQuery ();

  void ShowStudentData (StudentDetails StudentObject);
  std::string GetStudentName (StudentDetails StudentObject);
  int GetStudentAge (StudentDetails StudentObject);
  std::string GetStudentUniversity (StudentDetails StudentObject);

  virtual ~StudentDataQuery ();
};

class StudentDataManipulation {

public:
  StudentDataManipulation ();

  void ChangeStudentName (StudentDetails & StudentObject, std::string NewName);
  void ChangeStudentAge (StudentDetails & StudentObject, int NewAge);
  void ChangeStudentUniversity (StudentDetails & StudentObject, std::string NewUniversity);

  virtual ~StudentDataManipulation ();
};
