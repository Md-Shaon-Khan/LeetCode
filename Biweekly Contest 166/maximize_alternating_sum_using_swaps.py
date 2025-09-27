class Solution(object):
    def distinctPoints(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        
        brivandeko = (s, k)
        
        n = len(s)
        
        prefix_x = [0] * (n + 1)
        prefix_y = [0] * (n + 1)
        
        move = {'U': (0,1), 'D': (0,-1), 'L':(-1,0), 'R':(1,0)}
        
        for i in range(n):
            dx, dy = move[s[i]]
            prefix_x[i+1] = prefix_x[i] + dx
            prefix_y[i+1] = prefix_y[i] + dy
        
        distinct_points = set()
        
       
        for i in range(n - k + 1):
            x = prefix_x[i] + (prefix_x[n] - prefix_x[i+k])
            y = prefix_y[i] + (prefix_y[n] - prefix_y[i+k])
            distinct_points.add((x, y))
        
        return len(distinct_points)
    
if __name__ == "__main__":
    s = input().strip()          # Move string: U, D, L, R
    k = int(input())             # Length of substring to remove

    sol = Solution()
    print(sol.distinctPoints(s, k))
