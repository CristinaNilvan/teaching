#include "student_details_def.hpp"

int main(int argc, char const *argv[]) {

  StudentDetails StudentNumberOne("Cigan Oliviu-David", 19, "Technical University of Cluj-Napoca");
  StudentDataQuery StudentQuery;
  StudentDataManipulation StudentManipulator;

  StudentQuery.ShowStudentData (StudentNumberOne);

  StudentManipulator.ChangeStudentName (StudentNumberOne, "Nilvan Cristina");
  StudentManipulator.ChangeStudentAge (StudentNumberOne, 18);
  StudentManipulator.ChangeStudentUniversity (StudentNumberOne, "Technical University of Cluj Napoca");

  StudentQuery.ShowStudentData (StudentNumberOne);
  
  return 0;
}
