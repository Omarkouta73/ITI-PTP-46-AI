# def findDifference(nums1, nums2):
#     s1 = set(nums1)
#     s2 = set(nums2)
#     return list(s1 - s2), list(s2 - s1)

# def findDifference(nums1, nums2):
#     s1 = set(nums1)
#     s2 = set(nums2)
#     l1, l2 = [], []
#     for x1 in s1:
#         if x1 not in s2:
#             l1.append(x1)

#     for x1 in s2:
#         if x1 not in s1:
#             l2.append(x1)

#     return l1, l2
    
def findDifference(nums1, nums2):
    return list(set(nums1) - set(nums2)), list(set(nums2) - set(nums1))

print(findDifference([1,2,3], [2,4,6]))