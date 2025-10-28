class Solution(object):
    def findMissingAndRepeatedValues(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        import numpy as np
        grid = np.array(grid)
        arr = grid.flatten()
        
        n = len(grid)
        a = b = -1
        
        
        for num in range(1, n*n + 1):
            count = (arr == num).sum()  
            if count == 2:
                a = num
            elif count == 0:
                b = num
        
        return [a, b]
    

grid = [
    [1, 3],
    [2, 2]
]

solution = Solution()
result = solution.findMissingAndRepeatedValues(grid)
print(result)