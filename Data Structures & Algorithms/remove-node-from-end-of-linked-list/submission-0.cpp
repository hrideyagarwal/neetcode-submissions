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
ListNode* reverse ( ListNode* head){
    ListNode* curr=head;
        ListNode* prev=nullptr;
            
            while(curr!=nullptr){
                ListNode* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            return prev;


}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* list = head;
        list=reverse(head);
        head=list;
                ListNode* temp1 = head;
        ListNode* temp2 = head;
        if(n==1){
    head = head->next;
    list = reverse(head);
    return list;
}
        for(int i=0;i<n-1;i++){
            temp1=temp1->next;
        }
        for(int i=0;i<n-2;i++){
            temp2=temp2->next;
        }
        temp2->next = temp1 ->next;
        temp1->next=nullptr;
        list=reverse(head);
        head=list;
        return head;



    }
};
