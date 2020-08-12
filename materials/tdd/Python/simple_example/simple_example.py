class lists_properties():
    """properties for lists."""

    def __init__(self):
        super(lists_properties, self).__init__()


    def get_maximum_value_from_list(self, list):

        maximum_value = list[0];

        for item in list:
            if maximum_value < item:
                maximum_value = item

        return maximum_value


    def check_existing_value_in_list(self, list, value_to_check):

        for item in list:
            if item == value_to_check:
                return True

        return False

class test_cases():
    """test cases for lists_properties methods."""

    def __init__(self):
        super(test_cases, self).__init__()


    def assert_get_maximum_value_from_list(self, properties):

        the_list = [12, -12, 13, 72, 92, -1002, -345, 5421]

        assert properties.get_maximum_value_from_list(properties, the_list) == 5421


    def assert_check_existing_Value_in_list(self, properties):

        the_list = [12, -12, 13, 72, 92, -1002, -345, 5421]

        assert properties.check_existing_value_in_list(properties, the_list, -1002) == True

properties = lists_properties
cases = test_cases

cases.assert_get_maximum_value_from_list(cases, properties)
cases.assert_check_existing_Value_in_list(cases, properties)
