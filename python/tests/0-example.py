"""
This is the "example" module.

The example module supplies one function, factorial(), for example,

>>> factorial(5)
120
"""

def factorial(n):
   """Return the factorial of n, an exact integer >= 0.

   >>> [factorial(n) for n in range(6)]
   [1, 1, 2, 6, 24, 120]
   >>> factorial(30)
   265252859812191058636308480000000

   >>> factorial(-1)
   Traceback (most recent call last):
    ...
   ValueError: n must be >= 0

   Factorial of floats are ok, but the float must be an exact integer:
   >>> factorial(30.0)
   265252859812191058636308480000000

   It must also not be ridiculously large:
   >>> factorial(1e100)
   Traceback(most recent call last) :
    ...
   OverflowError: n too large
   """

   import math
   if not n >= 0:
       raise ValueError("n must be >= 0")
   if math.floor(n) != n:
       raise ValueError("n must be an exact integer")
   if n+1 == n:
       raise OverflowError("n too large")

   result = 1
   factor = 2
   while factor <= n:
       result *= factor
       factor += 1
   return result

if __name__ == "__main__":
    import doctest
    doctest.testmod()
