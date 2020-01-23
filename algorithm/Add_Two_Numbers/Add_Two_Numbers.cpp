/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result = new ListNode(0);
        ListNode * current = result;
        int carry = 0;
        int sum;
        while(l1 != NULL && l2 != NULL){
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            current->next = new ListNode(sum);
            current = current->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL){
            sum = l1->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            current->next = new ListNode(sum);
            current = current->next;
            l1 = l1->next;
        }
        while(l2 != NULL){
            sum = l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            current->next = new ListNode(sum);
            current = current->next;
            l2 = l2->next;
        }
        if(carry==1){
            current->next = new ListNode(1);
        }
        return result->next;
    }
};