class Solution(object):
    def moveZeroes(self, nums):
        new_array = []
        j = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                new_array.append(nums[i])
                j += 1
        while j < len(nums):
            new_array.append(0)
            j += 1
        
        for i in range(len(nums)):
            nums[i] = new_array[i]
        return nums

array = list(map(int,input().split(",")))


solution = Solution()
result = solution.moveZeroes(array)
print(result)
           