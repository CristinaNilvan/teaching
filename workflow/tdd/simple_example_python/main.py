import testing as testing
import source_code as sc

number = 2

properties = sc.NumberProperties (number)
tests = testing.TestFunctionalities

tests.test_is_prime_function (tests, properties)
tests.test_is_even_function (tests, properties)
