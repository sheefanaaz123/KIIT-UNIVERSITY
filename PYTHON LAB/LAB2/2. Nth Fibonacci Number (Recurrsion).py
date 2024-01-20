from math import *
from collections import *
from sys import *
from os import *


n = int(input())

def recur(n):

    if n == 1 or n == 2:
        return 1
    else:
        return recur(n - 1) + recur(n - 2)

ans = recur(n)
print(ans)


    
  





