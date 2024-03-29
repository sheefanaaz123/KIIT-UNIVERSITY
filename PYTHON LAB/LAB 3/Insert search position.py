def searchInsert(nums: list[int], target: int) -> int:
    if not nums:
            return 0
        
    for i, num in enumerate(nums):
        if num >= target:
            return i
        
    return len(nums)

ans = searchInsert([1,2,3,4],5)
print(ans)
 
 
