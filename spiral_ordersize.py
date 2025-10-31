class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        if not matrix:
            return []

        m, n = len(matrix), len(matrix[0])
        visited = [[False]*n for _ in range(m)]
        result = []

        
        top, bottom, left, right = 0, m-1, 0, n-1

        while len(result) < m * n:
            # Traverse from left to right on top row
            for col in range(left, right+1):
                if not visited[top][col]:
                    result.append(matrix[top][col])
                    visited[top][col] = True
            top += 1

            # Traverse from top to bottom on rightmost column
            for row in range(top, bottom+1):
                if not visited[row][right]:
                    result.append(matrix[row][right])
                    visited[row][right] = True
            right -= 1

            # Traverse from right to left on bottom row
            for col in range(right, left-1, -1):
                if not visited[bottom][col]:
                    result.append(matrix[bottom][col])
                    visited[bottom][col] = True
            bottom -= 1

            # Traverse from bottom to top on leftmost column
            for row in range(bottom, top-1, -1):
                if not visited[row][left]:
                    result.append(matrix[row][left])
                    visited[row][left] = True
            left += 1

        return result

# Example
matrix = [[1,2,3],[4,5,6],[7,8,9]]
sol = Solution()
print(sol.spiralOrder(matrix))
