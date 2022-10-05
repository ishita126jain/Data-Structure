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
    bool isPalindrome(ListNode* head) {
        
       ListNode *slow = head;
       ListNode *fast = head;
       ListNode *prev; 
       ListNode *temp;
        while (fast!=NULL && fast->next!=NULL){
             slow = slow->next;
             fast = fast->next->next;
        }
            
        prev = slow;
        slow = slow->next;
        prev->next = NULL;
        while (slow!=NULL){
             temp = slow->next; 
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
           
            fast = head; 
            slow = prev;
        while (slow){
             if (fast->val != slow->val) {
                  return false;
             }
             else {
                 fast = fast->next; 
                 slow = slow->next;
        }
          
        }  
        return true;
    }
    
};
