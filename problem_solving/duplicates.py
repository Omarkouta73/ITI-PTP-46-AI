def containsDuplicate(nums: list[int]) -> bool:
    counter = {n: 0 for n in nums}
    for i in range(0, len(nums)):
        counter[nums[i]]+=1
    
    for k, v in counter.items():
        if v > 1:
            return True
            
    return False

def containsDuplicate(nums: list[int]) -> bool:
    return len(nums) != len(set(nums))


print(containsDuplicate([1,2,2,3,4]))