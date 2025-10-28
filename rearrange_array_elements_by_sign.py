class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length = len(nums)
        
        result = [0]*length
        
        indexPos, indexNeg = 0,1
        
        for i in range(length):
            if nums[i] > 0:
                result[indexPos] = nums[i]
                indexPos += 2
            else:
                result[indexNeg] = nums[i]
                indexNeg += 2
                
        return result
    
numbers = list(map(int,input().split(",")))

solution = Solution()
result = solution.rearrangeArray(numbers)
print(result)