package com.company;

public class Main {

    public static void main(String[] args) {

        TestFunctionalities tests = new TestFunctionalities();
        Square square = new Square(5);

        tests.TestGetAreaOfShape(square);
        tests.TestGetPerimeterOfShape(square);
    }
}
