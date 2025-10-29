class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        length = len(nums)
        num = -1
        for i in range(length+1):
            if i in nums:
                continue
            else:
                num = i
                break
        return num