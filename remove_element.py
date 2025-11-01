class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        length = len(nums)
        count = nums.count(val)
        
        ans = length - count
        i = 0
        while i < len(nums):
            if val == nums[i]:
                nums.pop(i)
                
            else:    
                i += 1
        return ans