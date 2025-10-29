class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        count = 0
        temp = 0
        
        for i in range(len(nums)):
            if nums[i] == 1:
                temp += 1
                
            if temp > count:
                count = temp
            if nums[i] != 1:
                temp = 0
        return count

numbers = list(map(int,input().split(",")))


solution = Solution()
result = solution.findMaxConsecutiveOnes(numbers)
print(result)