import source_code as sc

class TestFunctionalities:

    def __init__(self):
        super(TestFunctionalities, self).__init__()

    def test_is_prime_function(self, properties):

        assert properties.is_prime () == True

    def test_is_even_function(self, properties):

        assert properties.is_even () == True
