import random

answer = random.randrange(1,50)

guess = int(input('Enter a number :: '))

while True:
    if guess < answer :
        print("Go higher!!")
        guess = int(input('Enter a number :: '))
    elif guess > answer:
        print("Go lower!!")
        guess = int(input('Enter a number :: '))
    else:
        print('Correct!!!!!')
        
