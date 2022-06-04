// 876 Middle of the linked list
// https://leetcode.com/problems/middle-of-the-linked-list/
// Difficulty: Easy
// Tags: Linked List
struct ListNode
{
    int val;
    ListNode *next;
    
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};