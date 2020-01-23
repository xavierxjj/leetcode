# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        result = ListNode(0)
        current = result
        while l1 is not None and l2 is not None:
            sum = l1.val + l2.val + carry
            carry = sum // 10
            sum = sum % 10
            current.next = ListNode(sum)
            current = current.next
            l1 = l1.next
            l2 = l2.next
        while l1 is not None:
            sum = l1.val + carry
            carry = sum // 10
            sum = sum % 10
            current.next = ListNode(sum)
            current = current.next
            l1 = l1.next
        while l2 is not None:
            sum = l2.val + carry
            carry = sum // 10
            sum = sum % 10
            current.next = ListNode(sum)
            current = current.next
            l2 = l2.next
        if carry == 1:
            current.next = ListNode(1)
        return result.next