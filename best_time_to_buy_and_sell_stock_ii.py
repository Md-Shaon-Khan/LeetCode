class Solution(object):
    def maxProfit(self, prices):
        sum = 0
        lSum = []

        i = 0
        
        temp = 0
        while i < len(prices) - 1:
            temp = prices[i+1] - prices[i]
            lSum.append(temp)
            if lSum[i] > 0:
                sum += lSum[i]
            i += 1
        return sum
    
arr = list(map(int,input().split(',')))
solution = Solution()
result = solution.maxProfit(arr)
print(result)