https://leetcode.com/problems/remove-nth-node-from-end-of-list/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int c=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        
        //cout<<c;
     
        int p=c-n-1;
        if(c==n)
            return head->next;
         ListNode *slow=head;
        while(p--)
        {
            slow=slow->next;
        }
        ListNode*t=slow->next;
        slow->next=slow->next->next;
        delete t;
        return head;
    }
};

2nd sol


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head;
        ListNode*fast=head;
     for(int i=0;i<n;i++)
        slow=slow->next;
        if(slow==NULL)
            return head->next;
        while(slow->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *temp=fast->next;
        fast->next=fast->next->next;
        delete temp;
        return head;
    }
};
