import java.util.*;

class ListProperties {

  public int GetMaximumValueFromList (List<Integer> List) {

    int Result = List.get(0);

    for (int iterator = 0; iterator < List.size(); iterator++)
      if (Result < List.get(iterator))
        Result = List.get(iterator);

    return Result;
  }

  public boolean CheckExistingValueInList (List<Integer> List, int ValueToCheck) {

    for (int iterator = 0; iterator < List.size(); iterator++)
      if (ValueToCheck == List.get(iterator))
        return true;

    return false;
  }
}

class ListBuilder {

  public void AssignList (List<Integer> List) {

    List.add(1);
    List.add(2);
    List.add(3);
    List.add(4);
    List.add(5);
    List.add(6);
    List.add(7);

  }
}

class TestCases {

  public void TestGetMaximumValueFromList (List<Integer> List, ListProperties Properties) {

    if (Properties.GetMaximumValueFromList(List) == 7)
      System.out.println("Test passed");

    else
      System.out.println("Test failed");
  }

  public void TestCheckExistingValueInList (List<Integer> List, ListProperties Properties) {

    if (Properties.CheckExistingValueInList(List, 4) == true)
      System.out.println("Test passed");

    else
      System.out.println("Test failed");
  }
}

class MainWorkFlow {

  public static void main (String[] args) {

    ListProperties Properties = new ListProperties();
    ListBuilder Builder = new ListBuilder();
    TestCases Cases = new TestCases();

    List<Integer> List = new ArrayList<Integer>();

    Builder.AssignList(List);

    Cases.TestGetMaximumValueFromList(List, Properties);
    Cases.TestCheckExistingValueInList(List, Properties);
  }
}
