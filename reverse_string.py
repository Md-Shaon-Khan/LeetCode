class Solution(object):
    def reverseString(self,s):
        length = len(s)

        start = 0
        length = length - 1
        while start < length:
            s[start],s[length] = s[length],s[start]
            start += 1
            length -= 1
        arr = []
        for i in range(len(s)):
            arr.append(s[i])
        return arr
    
arr = input().split(",")
solution = Solution()
result = solution.reverseString(arr)
print(result)