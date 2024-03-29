import numpy as np

matrix = np.ones((8,8))

matrix[ ::2, ::2] = 0
matrix[1::2, 1::2] = 0

print(matrix)