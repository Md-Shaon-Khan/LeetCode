class Solution(object):
    def smallestNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        for i in range(1, 1000):
            if 2**i - 1 >= n:
                return 2**i - 1
