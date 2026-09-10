/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*curr=head;
        ListNode*temp;
        if(curr==nullptr)
        return curr;
        if(curr->next==nullptr)
    return nullptr;
        int c=0;
        while(curr!=nullptr)
        {
            curr=curr->next;
            c++;
        }
        curr=head;
        int k=0;
        if(n == c)//fpr [1,2,3] n=3 so deleting 1 node 
    return head->next;
        while(k<c-n-1)
        {
            curr=curr->next;
            k++;
        
        }temp=curr->next;
        curr->next=temp->next;
        return head;
    }
};