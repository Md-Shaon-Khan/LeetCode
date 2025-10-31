class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        freq1 = [0]*26
        freq2 = [0]*26
        
        for ch in s.lower():
            if 'a' <= ch <='z':
                index = ord(ch) - ord('a')
                freq1[index] += 1
        for ch in t.lower():
            if 'a' <= ch <='z':
                index = ord(ch) - ord('a')
                freq2[index] += 1
        for i in range(0,25):
           if freq1[i] != freq2[i]:
               return False
        
        return True
           
input1 = input()
input2 = input()

solution = Solution()
result = solution.isAnagram(input1,input2)
print(result)