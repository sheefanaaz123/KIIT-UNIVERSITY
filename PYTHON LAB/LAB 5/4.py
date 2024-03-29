import numpy as np

def solve_linear_equations(A, B):
    A_inv = np.linalg.inv(A)
    X = np.dot(A_inv, B)
    
    return X

A1 = np.array([[1, 2],
               [2, -4]])
B1 = np.array([[-4],
               [-8]])

solution1 = solve_linear_equations(A1, B1)
print(solution1)
print("L 1:")
print("x =", solution1[0][0])
print("y =", solution1[1][0])

A2 = np.array([[1, 2, 3],
               [2, -3, 2],
               [3, 1, -1]])
B2 = np.array([[6],
               [14],
               [-2]])

solution2 = solve_linear_equations(A2, B2)

print("\nL 2:")
print("x =", solution2[0][0])
print("y =", solution2[1][0])
print("z =", solution2[2][0])
