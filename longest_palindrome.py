class Solution(object):
    def longestPalindrome(self, s):
        s = list(s)
        s.sort()
        newList = []
        i = 0
        middle_added = False

        while i < len(s):
            a = s.count(s[i])
            chara = s[i]
            
            if a == 1 and not middle_added:
                newList.insert(len(newList)//2, chara)
                middle_added = True
            elif a % 2 == 1 and not middle_added:
                newList.insert(len(newList)//2, chara)
                temp_a = a - 1
                while temp_a > 1:
                    newList.insert(0, chara)
                    newList.append(chara)
                    temp_a -= 2
                middle_added = True
            elif a % 2 == 1:
                temp_a = a
                while temp_a > 1:
                    newList.insert(0, chara)
                    newList.append(chara)
                    temp_a -= 2
            elif a % 2 == 0:
                temp_a = a
                while temp_a != 0:
                    newList.insert(0, chara)
                    newList.append(chara)
                    temp_a -= 2
            i += a

        return len(newList)


name = input()
solution = Solution()
num, result = solution.longestPalindrome(name)
print(num)
print(result)
