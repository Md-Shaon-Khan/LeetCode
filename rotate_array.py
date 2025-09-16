# class Solution(object):
#     def rotate(self,nums,k):
#         i = 0 
#         while i < k:
#             num = nums.pop()
#             nums.insert(0,num)
#             i += 1
        
#         return nums
    
# array = list(map(int,input().split(",")))
# k = int(input())

# solution = Solution()
# result = solution.rotate(array,k)
# print(result)


class Solution(object):
    def rotate(self, nums, k):
        n = len(nums)
        k %= n  

        
        def reverse(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1

        
        reverse(0, n-1)
        
        reverse(0, k-1)
        
        reverse(k, n-1)

        return nums

array = list(map(int,input().split(",")))
k = int(input())

solution = Solution()
result = solution.rotate(array,k)
print(result)