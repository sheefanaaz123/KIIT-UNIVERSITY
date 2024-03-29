import numpy as np

array = np.random.randint(1, 101, size=(10, 5))


odd_sum = np.sum(array[array %  2 != 0])
print(f"Odd sum {odd_sum}")


even_sum = np.sum(array[array %  2 == 0])
print(f"Even sum {odd_sum}")

diagonal_sum = np.sum(np.diagonal(array))
print(f"Diagonal sum {diagonal_sum}")

transpose = array.transpose()
print(transpose)

rows = array[[2,3,4,5,6]]
print(rows)

rows *= -1
print(rows)

flattened = rows.flatten()
print("Flatterned:",flattened)

total = np.sum(array)

mean = np.mean(array)

sd = np.std(array)
median = np.median(array)

flattened_sorted = array.flatten()
flattened_sorted.sort()



#



