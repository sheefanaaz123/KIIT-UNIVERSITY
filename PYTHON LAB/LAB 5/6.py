import numpy as np

mat = np.zeros((10,10))

mat[0,:] = 1
mat[-1:0] = 1
mat[:,0] = 1
mat[:, -1] = 1

print(mat)
