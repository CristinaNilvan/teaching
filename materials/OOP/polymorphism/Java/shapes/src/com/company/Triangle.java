package com.company;

class Triangle implements Shapes {

    private final int length;
    private final int width;

    public Triangle (int length, int width) {

        this.length = length;
        this.width = width;
    }

    @Override
    public int GetAreaOfShape() {

        int result = this.length * this.width;

        return result;
    }

    @Override
    public int GetPerimeterOfShape() {

        int result = 2 * this.length + 2 * this.width;

        return result;
    }
}
