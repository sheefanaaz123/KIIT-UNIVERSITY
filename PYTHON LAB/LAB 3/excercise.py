list1 = [1,2,3,4]
for i in list1:
    print(i)
    
dictionary = {
    'Name': 'Sheefa',
    'Roll': 85,
    'Section': 'CSSE2'
}

print(dictionary['Name'])
print(len(dictionary))
print(dictionary.keys())

dictionary['Name'] = 'Naaz'

print(dictionary['Name'])

nums = [1,2,2,3,4,5,6,9,8]
print(nums.count(2))

freq = {}

for num in nums:
    if num in freq.keys():
        freq[num]+=1
    else:
        freq[num] = 1
        
print(freq)


#SETS
s = {1,1,2,3}
print(s)
s.add(5)

s1 = {1,2,3,4,5}
s2 = {3,4,5}

#TUPLES
tup = (1,2,3)
print(tup)



    