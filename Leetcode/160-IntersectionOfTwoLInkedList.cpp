
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

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        ListNode *d1=headA;
        ListNode *d2=headB;
        
        int c1=0,c2=0;
        
        while(d1)
        {
             c1++;
            d1=d1->next;
        }
        d1=headA;
         while(d2)
        {
             c2++;
            d2=d2->next;
        }
        d2=headB;
        
        int diff=abs(c1-c2);
        
        if(c1>c2)
            while(diff--)
                d1=d1->next;
        else 
            while(diff--)
                d2=d2->next;
        
        while(d1 || d2)
        {
            if(d1==d2)
                return d2;
            else {
           d1=d1->next;
                d2=d2->next;
            }
        }
        
        return NULL;
                
    
    }
};

// Optimal Approach 3

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
       ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
		while(ptr1 != ptr2){
			if(ptr1 == NULL){
				ptr1 = headB;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = headA;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}
		return ptr1;
    
    }
};