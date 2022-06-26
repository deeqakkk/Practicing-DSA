
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
       ListNode *p=head;
        int c=0;
        while(p)
        {
            c++;
            p=p->next;
        }
        if(c==n)
            return head->next;
        
        p=head;
        int x=c-n-1;
        while(x--)
            p=p->next;
        
        
        p->next=p->next->next;
        
        return head;
    }
};