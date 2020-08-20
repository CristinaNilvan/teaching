package com.company;

public class TestFunctionalities {

    public void TestGetAreaOfShape (Square square) {

        if (square.GetAreaOfShape() == 25)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }

    public void TestGetPerimeterOfShape (Square square) {

        if (square.GetPerimeterOfShape() == 20)
            System.out.println("Test Passed");
        else
            System.out.println("Test Failed");
    }
}
