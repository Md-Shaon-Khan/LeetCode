# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def modifiedList(self, nums, head):
        """
        :type nums: List[int]
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        nums = set(nums)
        
        temp = ListNode(-1)
        temp.next = head
        
        prev,current = temp,head
        
        while current:
            if current.val in nums:
                prev.next = current.next
            else:
                prev = current
            current = current.next
            
        return temp.next