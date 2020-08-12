class NumberProperties {

  public static int GetFibonacciNumber (int PositionOfNumber) {

    int StartPointValue = 0;
    int FinalValue = 1;
    int IntermediateValue;

    if (PositionOfNumber == 0)
      return 0;

    for (int iterator = 2; iterator <= PositionOfNumber; iterator++) {

      IntermediateValue = StartPointValue + FinalValue;
      StartPointValue = FinalValue;
      FinalValue = IntermediateValue;
    }

    return FinalValue;
  }

  public static int GetFactorialNumber (int PositionOfNumber) {

    int Result = 1;

    for (int iterator = 1; iterator <= PositionOfNumber; iterator++)
      Result *= iterator;

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
