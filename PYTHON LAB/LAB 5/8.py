def reverse_rows(matrix):
    for row in matrix:
        row.reverse()

    return matrix

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("Original matrix:")
for row in matrix:
    print(row)

reverse_rows(matrix)

print("\nMatrix with rows reversed:")
for row in matrix:
    print(row)
