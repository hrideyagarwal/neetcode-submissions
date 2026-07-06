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
ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* curr=head;
                ListNode* slow=head;
                                ListNode* temp1=head;

        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second = slow->next;
        second=reverse(second);
                ListNode* curr2 = second;
                                ListNode* temp2 = slow->next;

    
        slow->next = nullptr;
        while(temp1!=nullptr && temp2!=nullptr){
            temp1=curr->next;
            temp2=curr2->next;
            curr->next=curr2;
            curr2->next = temp1;
            curr=temp1;
            curr2=temp2;

        }
      



        

    }
};
