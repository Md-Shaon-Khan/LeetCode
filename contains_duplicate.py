class Solution(object):
    def containsDuplicate(self, nums):
        nums.sort()

        count = 0
        i = 0
        while i < len(nums) - 1:
            if nums[i] == nums[i+1]:
                return True
            i +=1

        return False

# class Solution(object):
#     def containsDuplicate(self, nums):
#         seen = set()
#         for n in nums:
#             if n in seen:  
#                 return True
#             seen.add(n)     
#         return False

arr = list(map(int,input().split(',')))
solution = Solution()
result = solution.containsDuplicate(arr)

if result == True:
    print("true")
else:
    print("false")