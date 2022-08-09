https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*temp=node;
        swap(temp->val,temp->next->val);
        ListNode *del=temp->next;
        temp->next=temp->next->next;
        delete del;
    }
};
