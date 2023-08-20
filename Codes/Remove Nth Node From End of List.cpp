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
        int l=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==1){
            head=NULL;
            return head;
        }
        int x=l-n;
        int y=x-1;
        if(y<0){
            y=0;
        }
        temp=head;
        ListNode* temp1=head->next;
        while(y--){
            
            temp1=temp1->next;
            temp=temp->next;
        }
           if(l==n){
                
            
            head=temp1;
            delete(temp);
            return head;
        } 
           
             if(temp1->next==NULL){
            temp->next=NULL;
            delete(temp1);
            return head;
        }
        else if(temp1->next!=NULL){
            ListNode* temp2=temp1;
            temp1=temp1->next;
            temp->next=temp1;
            delete(temp2);
            return head;
        }
     
        else if(temp==head ){
            temp->next=NULL;
            delete(temp1);
            return head;
        }
         
        
        return head;
    }
};
