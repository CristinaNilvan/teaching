package com.company;

class StudentDetails {

    public String Name;
    public int Age;
    public String University;

    public StudentDetails(String NameParameter, int AgeParameter, String UniversityParameter) {

        Name = NameParameter;
        Age = AgeParameter;
        University = UniversityParameter;
    }
}

class StudentDataQuery {

    public static void ShowStudentData(StudentDetails Details) {

        System.out.println(Details.Name);
        System.out.println(Details.Age);
        System.out.println(Details.University);
    }

    public static String GetStudentName(StudentDetails Details) {

        return Details.Name;
    }

    public static int GetStudentAge(StudentDetails Details) {

        return Details.Age;
    }

    public static String GetStudentUniversity(StudentDetails Details) {

        return Details.University;
    }
}

class StudentDataManipulation {

    public static void ChangeStudentName(StudentDetails Details, String NewName) {

        Details.Name = NewName;
    }

    public static void ChangeStudentAge(StudentDetails Details, int NewAge) {

        Details.Age = NewAge;
    }

    public static void ChangeStudentUniversity(StudentDetails Details, String NewUniversity) {

        Details.University = NewUniversity;
    }
}
