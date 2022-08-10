https://leetcode.com/problems/intersection-of-two-linked-lists/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL)return headB;
        if(headB==NULL)return headA;
        ListNode*slow=headA;
        ListNode*fast=headB;
        while(slow!=fast)
        {
            if(slow==NULL)
            {
                slow=headB;
            }
            else
                slow=slow->next;
            if(fast==NULL)
            {
                fast=headA;
            }
           else
               
            fast=fast->next;
        }
        return slow;
    }
};
