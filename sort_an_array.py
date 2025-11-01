class Solution(object):
    def sortArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        self.mergeSort(nums, 0, len(nums) - 1)
        return nums

    def merge(self, arr, l, m, r):
        n1 = m - l + 1
        n2 = r - m

        Left = [0] * n1
        Right = [0] * n2

        for i in range(n1):
            Left[i] = arr[l + i]
        for j in range(n2):
            Right[j] = arr[m + 1 + j]

        i = j = 0
        k = l

        while i < n1 and j < n2:
            if Left[i] <= Right[j]:
                arr[k] = Left[i]
                i += 1
            else:
                arr[k] = Right[j]
                j += 1
            k += 1

        while i < n1:
            arr[k] = Left[i]
            i += 1
            k += 1

        while j < n2:
            arr[k] = Right[j]
            j += 1
            k += 1

    def mergeSort(self, arr, l, r):
        if l < r:
            m = (l + r) // 2
            self.mergeSort(arr, l, m)
            self.mergeSort(arr, m + 1, r)
            self.merge(arr, l, m, r)


numbers = list(map(int,input().split(",")))


solution = Solution()
result = solution.sortArray(numbers)
print(result)