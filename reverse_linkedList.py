class Node:
    def __init__(self,val=0,next=None):
        self.val = val
        self.next = next

class Solution(object):
    def reverseList(self,head):
        prev = None
        curr = head

        while curr is not None:
            next_node =  curr.next
            curr.next = prev
            prev = curr
            curr = next_node

        return prev  
    
def list_to_linkedlist(lst):
    if not lst:
        return None
    head = Node(lst[0])
    current = head
    for val in lst[1:]:
        current.next = Node(val)
        current = current.next
    return head

def linkedlist_to_list(head):
    lst = []
    current = head
    while current:
        lst.append(current.val)
        current = current.next
    return lst

input_list = list(map(int, input().split(',')))
head = list_to_linkedlist(input_list)

# Reverse linked list
solution = Solution()
reversed_head = solution.reverseList(head)

# Output
output_list = linkedlist_to_list(reversed_head)
print(output_list)