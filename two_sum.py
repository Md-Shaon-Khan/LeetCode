
class Solution(object):
    def twoSum(self,numbers,target):
        for i in range(len(numbers)):
           for j in range(i+1,len(numbers)):
              if numbers[i]+numbers[j] == target:
                 return [i,j]
        
        return False



numbers = list(map(int,input().split(",")))
target = int(input())

solution = Solution()
result = solution.twoSum(numbers,target)
print(result)