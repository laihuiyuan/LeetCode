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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode *p1=head;
        ListNode *newhead=new ListNode(-1);
        ListNode *p2=newhead;
        while(p1!=nullptr&&p1->next!=nullptr){
            p2->next=p1->next;
            p1->next=p2->next->next;
            p2->next->next=p1;
            p2=p1;
            p1=p1->next;
        }
        return newhead->next;
    }
};
