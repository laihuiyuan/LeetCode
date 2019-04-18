class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        if(!head->next) return NULL;
        ListNode *p = head, *q = head;
        for(int i=0;i<n;i++) 
            q=q->next;
        if(!q) return head->next;
        while(q->next){
            q = q->next;
            p = p->next;
            }
          p->next = p->next->next;
          return head;
    }
};
