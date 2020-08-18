package com.company;

public class Main {

    public static void main(String[] args) {

        StudentDetails StudentNumberOne = new StudentDetails("Cigan Oliviu-David", 19, "Technical Universiity of Cluj Napoca");
        StudentDataQuery Query = new StudentDataQuery();
        StudentDataManipulation Manipulation = new StudentDataManipulation();

        Query.ShowStudentData(StudentNumberOne);

        Manipulation.ChangeStudentName(StudentNumberOne, "Nilvan Cristina");
        Manipulation.ChangeStudentAge(StudentNumberOne, 18);
        Manipulation.ChangeStudentUniversity(StudentNumberOne, "Technical University of Cluj-Napoca");

        Query.ShowStudentData(StudentNumberOne);
    }
}
