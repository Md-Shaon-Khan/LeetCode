class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def sortList(self, head):
        
        if not head:
            return None
        
        arr = []
        current = head
        while current:
            arr.append(current.val)
            current = current.next
        
        for i in range(1,len(arr)):
            key = arr[i]
            j = i - 1
            
            while j >= 0 and key<arr[j]:
                arr[j+1] = arr[j]
                j -= 1
            arr[j+1] = key
        
        dummy = ListNode(0)
        current = dummy
        for value in arr:
            current.next = ListNode(value)
            current = current.next
        
        return dummy.next
