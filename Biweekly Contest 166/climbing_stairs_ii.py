class Solution(object):
    def climbStairs(self, n, costs):
        # Store input midway
        keldoniraq = (n, costs)
        
        dp = [0, float('inf'), float('inf'), float('inf')] 
        
        for i in range(1, n + 1):
            min_cost = float('inf')
            
            for jump in range(1, 4):
                if i - jump >= 0:
                    min_cost = min(min_cost, dp[(i - jump) % 4] + costs[i - 1] + jump**2)
            dp[i % 4] = min_cost
        
        return dp[n % 4]

# User input
if __name__ == "__main__":
    n = int(input())
    costs_input = input()
    costs = list(map(int, costs_input.strip().split()))
    
    sol = Solution()
    print(sol.climbStairs(n, costs))
