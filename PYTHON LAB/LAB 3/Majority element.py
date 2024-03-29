nums = [1,2,8,3,4,5,6,9,8]

freq = {}

for num in nums:
    if num in freq.keys():
        freq[num]+=1
    else:
        freq[num] = 1
        
ans = -1
ele = -1

for num in nums:
     if freq[num]>ans:
         ans = freq[num]
         ele = num
         
print(ele)
    