import numpy as np

array1 = np.array([11,22,33,44,55,66,77])
array2 = np.array([99,77,33,44])

ans = np.intersect1d(array1,array2)

print(ans)
