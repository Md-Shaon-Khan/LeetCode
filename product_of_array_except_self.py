class Solution(object):
    def productExceptSelf(self, nums):
        i = 0
        count  = 0
        mul = 1
        while i < len(nums):
            
            if nums[i] == 0:
                count += 1
            else:
                mul *= nums[i]
            i += 1
        
        i = 0
        temp = 0
        arr = []
        while i < len(nums):
            if count >= 2:
                arr.append(0)
            elif count == 1 and nums[i] != 0:
                arr.append(0)
            elif count == 1 and nums[i] == 0:
                arr.append(mul)
            else:
                temp = int(mul / nums[i])
                arr.append(temp)
            
            i += 1

        return arr
    
array = list(map(int,input().split(",")))

solution = Solution()
result = solution.productExceptSelf(array)
print(result)                    



            
