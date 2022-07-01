// Approach !: Hashing
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> hm;
        while(head!=NULL)
        {
            if(hm.find(head)!=hm.end())
                return true;
            
            hm.insert(head);
            head=head->next;
            
        }
        
        return false;
    }
};