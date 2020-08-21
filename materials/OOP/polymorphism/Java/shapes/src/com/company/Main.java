package com.company;

public class Main {

    public static void main(String[] args) {

        TestFunctionalities tests = new TestFunctionalities();
        Square square = new Square(5);
        Triangle triangle = new Triangle(3, 4);

        tests.TestGetAreaOfSquare(square);
        tests.TestGetPerimeterOfSquare(square);

        tests.TestGetAreaOfTriangle(triangle);
        tests.TestGetPerimeterOfTriangle (triangle);
    }
}
