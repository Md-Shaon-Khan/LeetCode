class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        x_neg = 0
        if x < 0:
            x_neg = x
            x = abs(x)
        
        reversed_number = int(str(x)[::-1])
        
        if x_neg<0:
            reversed_number *= -1
        
        if reversed_number <= 2**31 - 1 and reversed_number >= (-2**31):
           return reversed_number
        else:
            return 0