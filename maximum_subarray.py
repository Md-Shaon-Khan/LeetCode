#Brute Force Algo.

# class Solution(object):
#     def maxSubArray(self, nums):
#        length = len(nums)

#        sum = 0
#        max_sum = 0
#        i = 0
#        while i<length:
#            j = i
#            while j < length:
#                 k = i
#                 sum = 0
#                 while k <= j:
#                   sum += nums[k]
#                   k += 1
#                 if max_sum < sum:
#                     max_sum = sum 
                
#                 j += 1
#            i += 1
#        return max_sum


#Kadane's Algo.

class Solution(object):
    def maxSubArray(self, nums):
       i = 0
       current_sum = 0
       max_sum = float('-inf')
       while i < len(nums):


           current_sum += nums[i]
           max_sum = max(current_sum,max_sum)
           if current_sum < 0:
               current_sum = 0
           i += 1
        
       return max_sum

array = list(map(int,input().split(",")))


solution = Solution()
result = solution.maxSubArray(array)
print(result)
           