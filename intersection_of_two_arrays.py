class Solution(object):
    def intersection(self, nums1, nums2):
        arr1 = set()
        arr2 = set()

        for i in nums1:
            if i not in arr1:
                arr1.add(i)
        #print(arr1)
        for i in nums2:
            if i not in arr2:
                arr2.add(i)
        #print(arr2)
        if len(nums1) < len(nums2):
            minimum = nums1
            maximum = nums2
        else:
            minimum = nums2
            maximum = nums1
        
        result = set()
        for n in minimum:
            if n in maximum:
                result.add(n)
        return list(result)


arr1 = list(map(int,input().split(',')))
arr2 = list(map(int,input().split(',')))
solution = Solution()
result = solution.intersection(arr1,arr2)
print(result) 