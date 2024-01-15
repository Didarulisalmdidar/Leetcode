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
    ListNode* reverse(ListNode *head)// Reverse a list
    {
       ListNode *prev= NULL;
        ListNode *car=head;
        ListNode *next=NULL;
        while(car)
        {
            next=car->next;
            car->next=prev;
            prev=car;
            car=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
       
       ListNode *slow=head;
       ListNode *fast=head->next;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
       }
        ListNode *first=head;
        ListNode *second=reverse(slow->next);
        slow->next=NULL;
        ListNode *temp1=NULL;
        ListNode *temp2=NULL;
        while(second!=NULL)
        {
            temp1=first->next;
            temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
    
    
        
     
        
    }
   
};