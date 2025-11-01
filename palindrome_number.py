class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        
        number = int(str(x)[::-1])
        
        if number == x:
            return True
        else:
            return False