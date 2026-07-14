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
    ListNode* reverseKGroup(ListNode* head, int k) {
        //sabse pehle ek count initialize karo 
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL && count<k){
            temp=temp->next;
            count++;
        } 
        //if exists
        if(count==k){
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* forward=NULL;
            //i i s used to tell
            int i=0;
            while(i<k){
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                i++;
            }
            //baaki grp ke liye bhi karle
            ListNode* reversekahead=reverseKGroup(forward,k); //forward node se k ke grp pe recursively
            //join
            head->next=reversekahead;
            return prev;
        }
        else{
            return head;
        }
    }
};