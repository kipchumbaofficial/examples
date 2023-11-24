import unittest
from my_calculations import Calculations

class TestCalculations(unittest.TestCase):
    def test_sum(self):
        calculations = Calculations(8, 2)
        self.assertEqual(calculations.get_sum(), 10, 'The sum is wrong')

    def test_difference(self):
        calculation = Calculations(4, 2)
        self.assertEqual(calculation.get_difference(), 2, 'The difference is wrong')

if __name__ == '__main__':
    unittest.main()
