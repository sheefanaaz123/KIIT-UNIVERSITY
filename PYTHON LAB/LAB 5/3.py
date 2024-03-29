import numpy as np

class Changer:
    def __init__(self, array):
        self.array = array

    def reverse_row_elements(self):
        return np.flip(self.array, axis=1)

    def reverse_rows(self):
        return np.flip(self.array, axis=0)

    def reverse_columns_and_rows(self):
        reversed_rows = np.flip(self.array, axis=0)
        return np.flip(reversed_rows, axis=1)

    def cut_first_last_rows_columns(self):          
        return self.array[1:-1, 1:-1]

original_array = np.array([[1, 2, 3],
                           [4, 5, 6],
                           [7, 8, 9]])

obj = Changer(original_array)

print(original_array)
print(obj.reverse_row_elements())
print(obj.reverse_rows())
print(obj.reverse_columns_and_rows())
print(obj.cut_first_last_rows_columns())
