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
        ListNode *head=new ListNode(-1);
        ListNode *p=head;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){
            int v1=l1?l1->val:0;
            int v2=l2?l2->val:0;
            int sum=v1+v2+carry;
            p->next=new ListNode(sum%10);
            carry=sum/10;
            p = p->next;
            if (l1!=nullptr) l1 = l1->next;
            if (l2!=nullptr) l2 = l2->next;
        }
        if(carry) p->next=new ListNode(carry);
        return head->next;
    }
};
