def twoSum(nums: list[int], target: int) -> list[int]:
    n = len(nums)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == target:
                return [i, j]
    return []

list2 = [1,1,2,3,4]
ans = twoSum(nums = list2,target =2)
print(ans)
