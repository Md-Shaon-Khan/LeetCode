class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        from itertools import product

        if not digits:  
            return []

        keypad = {
            '2': ['a', 'b', 'c'],
            '3': ['d', 'e', 'f'],
            '4': ['g', 'h', 'i'],
            '5': ['j', 'k', 'l'],
            '6': ['m', 'n', 'o'],
            '7': ['p', 'q', 'r', 's'],
            '8': ['t', 'u', 'v'],
            '9': ['w', 'x', 'y', 'z']
        }

        
        letters_list = [keypad[digit] for digit in digits if digit in keypad]

        if not letters_list: 
            return []

        combinations = [''.join(p) for p in product(*letters_list)]
        return combinations



numbers = int(input())


numbers_str = str(numbers)

solution = Solution()
result = solution.letterCombinations(numbers_str)
print(result)
