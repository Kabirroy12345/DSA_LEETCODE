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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode*curr=head;
        ListNode*prev=NULL;

        while(curr!=NULL){
            ListNode*forward=curr->next; //pehle yeh aage bhadha do
            curr->next=prev;  //link change karo
            prev=curr;
            curr=forward;
        }
        head=prev; //last mai jab prev aakri pahochega then head mark kardo
        return head;
    }

};