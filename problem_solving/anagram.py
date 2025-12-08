def isAnagram(s: str, t: str) -> bool:
    return sorted(s) == sorted(t)

print(isAnagram(s = "anagram", t = "nagaram"))

