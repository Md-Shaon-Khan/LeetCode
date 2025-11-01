class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        num1 = int(a,2)
        num2 = int(b,2)
        
        sum_num = num1+num2
        
        binary = bin(sum_num)[2:]
        
        return binary

a = input()
b = input()

solution = Solution()
result = solution.addBinary(a,b)
print(result)