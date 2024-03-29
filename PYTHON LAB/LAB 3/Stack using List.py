def pop(nums: list[int]):
    nums.pop(-1)
    
def insert(nums: list[int], ele: int):
    nums.append(ele)

stack = [1,2,3,4,5]
pop(stack)
print(stack)

insert(stack,9)
print(stack)