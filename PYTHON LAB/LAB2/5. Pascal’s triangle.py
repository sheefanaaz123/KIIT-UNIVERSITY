from typing import List

def printPascal(n: int) -> List[List[int]]:
    # Write your code here.
    ans = []
    for i in range(n):
        row = [0] * (i + 1)
        row[0] = 1
        row[-1] = 1
        for j in range(1, i):
            row[j] = ans[i - 1][j - 1] + ans[i - 1][j]
        ans.append(row)
    return ans

n = int(input("Enter the number of rows :: "))
result = printPascal(n)

for row in result:
    print(row)
