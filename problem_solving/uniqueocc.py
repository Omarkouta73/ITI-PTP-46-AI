# def uniqueOccurrences(arr) -> bool:
#     # arr = [1,2,2,1,1,3]
#     s = {x: arr.count(x) for x in arr}
#     cts = []
#     for k, v in s.items():
#         if v not in cts:
#             cts.append(v)
#         else:
#             return False
    
#     return True

def uniqueOccurrences(arr) -> bool:
    # arr = [1,2,2,1,1,3]
    s = {x: arr.count(x) for x in arr}
    return len(s.values()) == len(set(s.values()))
print(uniqueOccurrences([1, 2]))