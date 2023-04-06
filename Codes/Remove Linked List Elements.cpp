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
    ListNode* removeElements(ListNode* head, int val) {
      
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            if(head->val==val){
                head=NULL;
                return head;
            }
            else{
                return head;
            }
        }
          ListNode* temp=head;
        ListNode* temp1=temp->next;
        
       
        while(temp->next!=NULL && temp1!=NULL){
            
            if(temp->val==val && temp==head){
                ListNode* temp2=temp;
                head=temp1;
                 if(head->next==NULL && head->val==val){
                    head=NULL;
                    return head;
                }
                temp=temp1;
                temp1=temp1->next;
                delete(temp2);
            }
           
            else if(temp1->val==val && temp->next->next==NULL){
                temp->next=NULL;
                delete(temp1);
              return head;
            }
              else if(temp1->val==val && temp->next->next!=NULL){
                ListNode* temp2=temp1;
                temp1=temp1->next;
                temp->next=temp1;
                delete(temp2);
            }
            else{
                 temp=temp1;
            temp1=temp1->next;
            }
         
         }
        return head;
    }
};
