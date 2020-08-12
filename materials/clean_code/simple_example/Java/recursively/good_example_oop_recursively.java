class NumberProperties {

  public static int GetFibonacciNumber (int PositionOfNumber) {

    if (PositionOfNumber == 1)
      return 1;

    if (PositionOfNumber == 2)
      return 1;

    int Result;

    Result = GetFibonacciNumber(PositionOfNumber - 1) + GetFibonacciNumber(PositionOfNumber - 2);

    return Result;
  }

  public static int GetFactorialNumber (int PositionOfNumber) {

    if (PositionOfNumber == 0)
      return 1;

    if (PositionOfNumber == 1)
      return 1;

    int Result;

    Result = PositionOfNumber * GetFactorialNumber(PositionOfNumber - 1);

    return Result;  
  }
}

class TestCases {

  public static void AssertFibonacci (NumberProperties Properties) {

    if (Properties.GetFibonacciNumber(7) == 13)
      System.out.println("Fibonacci test passed");
  }

  public static void AssertFactorial (NumberProperties Properties) {

    if (Properties.GetFactorialNumber(3) == 6)
      System.out.println("Factorial test passed");
  }
}

class Main {

  public static void main (String[] args) {

    NumberProperties Properties = new NumberProperties();
    TestCases Cases = new TestCases();

    Cases.AssertFibonacci(Properties);
    Cases.AssertFactorial(Properties);
  }
}
