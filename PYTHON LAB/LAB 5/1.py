#Write a program which computes the multiplication of two 100 * 100 matrices.
#Compare the running time of implementation using python lists and implementation using the
#numpy arrays. To compute the running time of a program, you can use time module of python.

import time
import numpy as np


mat1 = [[i+j for j in range(100)] for i in range(100)]
mat2 = [[i+j for j in range(100)] for i in range(100)]

start = time.time()

result = [[0 for _ in range(100)] for _ in range(100)]
for i in range(100):
    for j in range(100):
        for  k in range(100):
            result[i][j] += mat1[i][k]*mat2[k][j]
            
            
end = time.time()

print(f"The difference is {end-start}")

