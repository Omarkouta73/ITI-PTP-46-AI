def findMaxAverage(nums, k):
    s = 0
    for x in nums[:k]:
        s+=x
    
    ans = s
    for i in range(k, len(nums)):
        s+=nums[i]
        s-=nums[i-k]
        ans = max(ans, s)
    
    return ans/k


# s1 = "ab", s2 = "eidbaooo"
# {a: 1, b: 1}

def checkInclusion(s1: str, s2: str):
    if len(s1) > len(s2):
        return False
    
    book = {c: s1.count(c) for c in s1}
    k = len(s1)
    c_counter = {}
    for i in range(k):
        c_counter[s2[i]] = c_counter.get(s2[i], 0)+1

    if c_counter == book:
        return True
    
    for j in range(k, len(s2)):
        new_char = s2[j]
        c_counter[new_char] = c_counter.get(new_char, 0) + 1
        
        old_char = s2[j - k]
        c_counter[old_char] -= 1
        if c_counter[old_char] == 0:
            del c_counter[old_char]

        if c_counter == book:
            return True
    
    return False


print(checkInclusion("ab", "eidbaooo"))
