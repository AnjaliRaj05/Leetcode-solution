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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *t=new ListNode(0);
        ListNode *head=t;
        // listnode type =type to k
        //
        //
        
        int carry=0;
        while(temp1!=NULL and temp2!=NULL)
        {
            int a=temp1->val+temp2->val+carry;
            temp1=temp1->next;
            temp2=temp2->next;
            carry=a/10;
            t->next=new ListNode(a%10);
            t=t->next;



    
        }
        while(temp1!=NULL)
        {
            int a=temp1->val+carry;
            temp1=temp1->next;
            carry=a/10;
            t->next=new ListNode(a%10);
            t=t->next;
            
        }
        while(temp2!=NULL)
        {
            int a=+temp2->val+carry;
            temp2=temp2->next;
            carry=a/10;
            t->next=new ListNode(a%10);
            t=t->next;
        }
        if(carry!=0)
        {
            t->next=new ListNode(carry);
        }
        return head->next;
  

    }
};