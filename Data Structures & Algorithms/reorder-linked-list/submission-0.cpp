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
    void reorderList(ListNode* head) {
        //base case
        if(head==nullptr||head->next==nullptr){
            return ;
        }

        //recursive equation
        ListNode* slast= head;
        while(slast!=nullptr&&slast->next!=nullptr&&slast->next->next!=nullptr){
            slast=slast->next;
        }
        ListNode* temp=slast->next;
        slast->next=nullptr;
        reorderList(head->next);
        ListNode* curr=head->next;
        head->next=temp;
        temp->next=curr;
    }
};
