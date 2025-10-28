class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length = len(nums)
        
        nums.sort()
        temp = 1
        count = 0
        i=1
        maj = nums[0]
        while i<length:
            if nums[i-1]==nums[i]:
                temp = temp + 1
            else:
                temp = 1
            if temp>count:
                count = temp
                maj = nums[i]
            i = i+1
            
        return maj
    

numbers = list(map(int,input().split(",")))

solution = Solution()
result = solution.majorityElement(numbers)
print(result)