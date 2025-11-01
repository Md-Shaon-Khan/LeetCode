# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def swapPairs(self, head):
        dummy = ListNode(-1)
        dummy.next = head
        prev = dummy

        while prev.next and prev.next.next:
            current = prev.next
            next_node = prev.next.next

            current.next = next_node.next
            next_node.next = current
            prev.next = next_node

            prev = current

        return dummy.next
