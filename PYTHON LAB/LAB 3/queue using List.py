# queue using list
def pop(nums: list[int]):
    nums.pop(0)
    
def insert(nums: list[int], ele: int):
    nums.append(ele)

queue = [1,2,3,4,5]
pop(queue)
print(queue)

insert(queue,5)
print(queue)