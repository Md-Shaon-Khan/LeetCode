from collections import Counter, defaultdict

class Solution(object):
    def majorityFrequencyGroup(self, s):
        """
        :type s: str
        :rtype: str
        """
       
        freq = Counter(s)
        
        
        groups = defaultdict(list)
        for char, count in freq.items():
            groups[count].append(char)
        
       
        max_size = 0
        max_freq = 0
        result = []
        
        for k, chars in groups.items():
            if len(chars) > max_size or (len(chars) == max_size and k > max_freq):
                max_size = len(chars)
                max_freq = k
                result = chars
        
        return "".join(result)

if __name__ == "__main__":
    s = input()
    sol = Solution()
    print(sol.majorityFrequencyGroup(s))