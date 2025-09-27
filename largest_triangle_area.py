from itertools import combinations

class Solution(object):
    def largestTriangleArea(self, points):
        """
        :type points: List[List[int]]
        :rtype: float
        """
        def area(p1, p2, p3):
            return abs(
                p1[0]*(p2[1]-p3[1]) +
                p2[0]*(p3[1]-p1[1]) +
                p3[0]*(p1[1]-p2[1])
            ) / 2.0
        
        max_area = 0
        for p1, p2, p3 in combinations(points, 3):
            max_area = max(max_area, area(p1, p2, p3))
        
        return max_area


# Example test cases
# sol = Solution()
# print(sol.largestTriangleArea([[0,0],[0,1],[1,0],[0,2],[2,0]]))  # Output: 2.0
# print(sol.largestTriangleArea([[1,0],[0,0],[0,1]]))              # Output: 0.5
