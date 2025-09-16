class Solution(object):
    def removeDuplicates(self,nums):
        unique_numbers = list(set(nums))
        array = []
        for i in range(len(unique_numbers)):
            occurrences = nums.count(unique_numbers[i])
            if occurrences >=2:
                array.append(unique_numbers[i])
                array.append(unique_numbers[i])
            else:
                array.append(unique_numbers[i])
        
        len1 = len(nums)
        len2 = len(array)

        
        while len2 < len1:
            array.append('_')
            len2 += 1
        print("[" + ",".join(str(x) if x != "_" else "_" for x in array) + "]")
    


numbers = list(map(int,input().split(",")))
solution = Solution()
solution.removeDuplicates(numbers)

