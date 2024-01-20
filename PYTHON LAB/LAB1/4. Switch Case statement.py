from typing import *
from math import pi

def areaSwitchCase(ch: int, a: List[float]):
    # Write your code here
    if ch==1:
        ans = pi*a[0]*a[0]
    elif ch == 2:
        ans = a[0]*a[1]

    return '{:.5f}'.format(ans)
