package com.company;

class Square implements Shapes {

    private final int length;

    public Square (int length) {

        this.length = length;
    }

    @Override
    public int GetAreaOfShape () {

        int result;

        result = (int) Math.pow(this.length, 2);

        return result;
    }

    @Override
    public int GetPerimeterOfShape () {

        int result;

        result = 4 * this.length;

        return result;
    }
}
