
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        
        while(temp1)
        {
            while(temp2)
            {
                if(temp2==temp1)
                    return temp1;
                else 
                    temp2=temp2->next;
            }
            temp1=temp1->next;
            temp2=headB;
        }
        return NULL;
    }
};

// Optimal Approach 1


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_map<ListNode*, int> m;
        while(headA)
        {
            m[headA]++;
            headA=headA->next;
           
        }
        
        while(headB){
        if(m[headB]>0)
             return headB;
            
            headB=headB->next;
        }
        
        return NULL;
    
    }
};

// Optimal Approach 2