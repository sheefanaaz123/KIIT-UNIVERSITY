def containsDuplicate(nums: list[int]) -> bool:
    n = len(nums)
    f = False
    for i in range(n - 1):
        for j in range(i + 1, n):
            if nums[i] == nums[j]:
                f = True
                break
    
    return f


ans = containsDuplicate([1,22,22,3,4])

if ans == True:
    print('Yes! contain duplicate')
else:
    print('No duplicate')