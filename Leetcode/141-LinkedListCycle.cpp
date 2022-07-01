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

// Approach 2: Two Pointers
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};

