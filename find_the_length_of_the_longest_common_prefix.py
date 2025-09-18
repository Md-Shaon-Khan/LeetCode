class Solution(object):
    def longestCommonPrefix(self, arr1, arr2):
        maximum = 0
        
       
        for x in arr1:
            for y in arr2:
                sx, sy = str(x), str(y)   
                length = 0
               
                while length < len(sx) and length < len(sy) and sx[length] == sy[length]:
                    length += 1
                maximum = max(maximum, length)
        
        return maximum


array1 = list(map(int,input().split(",")))
array2 = list(map(int,input().split(",")))


solution = Solution()
result = solution.longestCommonPrefix(array1,array2)
print(result)