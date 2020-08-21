package com.company;

public class TestFunctionalities {

    public void TestGetAreaOfSquare (Square square) {

        if (square.GetAreaOfShape() == 25)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }

    public void TestGetPerimeterOfSquare (Square square) {

        if (square.GetPerimeterOfShape() == 20)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }

    public void TestGetAreaOfTriangle (Triangle triangle) {

        if (triangle.GetAreaOfShape() == 12)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }

    public void TestGetPerimeterOfTriangle (Triangle triangle) {

        if (triangle.GetPerimeterOfShape() == 14)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }
}
