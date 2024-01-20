n = int(input("Enter row :"))

for i in range(0,n+1):
    for j in range(0,i):
        print(j+1, end="")
    print('\n')
        