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
        if(head==NULL && head->next==NULL) return NULL;
        ListNode* temp = new ListNode();
        temp -> next = head;
        
        ListNode* slow = temp; // two pointer approch
        ListNode* fast = temp;
        
        while(n>0 ){
            fast = fast -> next;
            n--;
        }
        
        while(fast->next){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        slow -> next = slow->next->next;
        slow = fast;
        
        return temp -> next;
    }
};