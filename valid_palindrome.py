import re

class Solution(object):
    def isPalindrome(self, s):
        s = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        length = len(s) - 1
        start = 0

        while start<length:
            if s[start] != s[length]:
                return False
            
            start += 1
            length -= 1
        
        return True
        

s = input()
solution = Solution()
result = solution.isPalindrome(s)

if result == True:
    print("true")
else:
    print("false")