

class Solution(object):
    def subarraySum(self, nums, k):
        res = 0
        c = 0
        pSum = {0:1}
        for n in nums :
            c += n
            diff = c - k
            res += pSum.get(diff,0)
            pSum[c] = 1 + pSum.get(c,0)
        return res




array = list(map(int,input().split(",")))
k = int(input())
solution = Solution()
result = solution.subarraySum(array,k)
print(result)                    
