#Write a python program which takes three inputs from user, first input is a number n, second input is a list of integers of size n 
# and third input is another number x. Now your goal is to find three numbers num1, num2, num3 from the list whose sum is equal to x i.e.
# num1 + num2 + num3 == x


list = []

n = int(input("Enter the number n  : "))

for i in range(0,n):
    temp = int(input("Enter number "  + str(i+1) + ": "))
    list.append(temp)
    
    

x = int(input("Enter the value of x "))


for i in range(n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if list[i] + list[j] + list[k] == x:
                    print("The element are ")
                    print(list[i])
                    print(list[j])
                    print(list[k])
                    
                    
