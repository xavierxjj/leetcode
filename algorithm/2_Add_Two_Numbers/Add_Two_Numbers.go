/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    result := &ListNode{}
    current := result
    carry := 0
    var sum int
    for l1!=nil && l2!=nil{
        sum = l1.Val + l2.Val + carry
        carry = sum / 10
        sum = sum % 10
        current.Next = &ListNode{
            Val : sum,
        }
        current = current.Next
        l1 = l1.Next
        l2 = l2.Next
    }
    for l1!=nil{
        sum = l1.Val + carry
        carry = sum / 10
        sum = sum % 10
        current.Next = &ListNode{
            Val : sum,
        }
        current = current.Next
        l1 = l1.Next
    }
    for l2!=nil{
        sum = l2.Val + carry
        carry = sum / 10
        sum = sum % 10
        current.Next = &ListNode{
            Val : sum,
        }
        current = current.Next
        l2 = l2.Next
    }
    if carry == 1{
        current.Next = &ListNode{
            Val : 1,
        }
    }
    return result.Next
}