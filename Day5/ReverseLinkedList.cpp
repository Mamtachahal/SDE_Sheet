class Solution {
public:
    ListNode* reverseList(ListNode* head) {
          if(head==NULL)return NULL ;
        ListNode *p=NULL,*c=head,*n=head->next;
        while(c!=NULL)
        {
          c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
        }
        return p;
    }
};




class Solution {
public:
    ListNode* solve(ListNode*  head)
    {
        if(head->next==NULL)return head;
            ListNode* newnode=solve(head->next);
           head->next->next=head;
        head->next=NULL;
        return newnode;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return NULL;
        return solve(head);
    }
};
