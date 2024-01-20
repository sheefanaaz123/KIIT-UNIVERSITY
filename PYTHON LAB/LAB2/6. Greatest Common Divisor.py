from os import *
from sys import *
from collections import *
from math import *

def findGcd(x, y):
    if y == 0:
        return x
    else:
        return findGcd(y, x%y)

a = int(input("Enter a: "))
b = int(input("Enter b: "))
ans = findGcd(a, b)
print("GCD ::", ans)
