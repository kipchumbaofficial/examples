import unittest
from circles import circle_area
from math import pi

class TestCircleArea(unittest.TestCase):
    def test_area(self):
        '''test area when  r >= 0
        '''
        self.assertAlmostEqual(circle_area(1), pi)
        self.assertAmostEqual(circle_area(0), 0)
        self.assertAlmostEqual(circle_area(2.1), pi * (2.1 ** 2))
