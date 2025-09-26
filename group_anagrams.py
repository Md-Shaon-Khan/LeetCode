class Solution(object):
    def groupAnagrams(self, strs):
        anotherString = [''.join(sorted(word)) for word in strs]

        index_map = {} 

       
        for i, s in enumerate(anotherString):
            if s in index_map:
                index_map[s].append(i)
            else:
                index_map[s] = [i]

        
        result = [[strs[i] for i in group] for group in index_map.values()]
        return result 

arr = list(input().split(','))
solution = Solution()
result = solution.groupAnagrams(arr)
print(result)