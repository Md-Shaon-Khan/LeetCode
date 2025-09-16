# class Solution(object):
#     def maxProfit(self,prices):
#         max = 0
#         for i in range(len(prices)):
#             for j in range(i+1,len(prices)):
#                 if prices[j]>prices[i] and (prices[j]-prices[i])>max:
#                     max = prices[j] - prices[i]
        
#         return max
    
class Solution(object):
    def maxProfit(self,prices):
        min_price = float('inf')
        max_profit = 0

        for price in prices:
            if price < min_price:
                min_price = price
            elif price - min_price > max_profit:
                max_profit = price - min_price
        
        return max_profit
    
array = list(map(int,input().split(",")))

solution = Solution()
result = solution.maxProfit(array)
print(result)                    