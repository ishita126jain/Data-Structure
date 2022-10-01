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
    ListNode* deleteMiddle(ListNode* head) {
        int l=0,mid;
        int s=1;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==1){
            head=NULL;
            return head;
        }
        if(l%2==0){
            mid=(s+(l-s)/2)+1;
        }
        else{
            mid=s+(l-s)/2;
        }
        temp=head;
        ListNode* temp1=head->next;
        int x=mid-2;
        while(x--){
            temp1=temp1->next;
            temp=temp->next;
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
        return head;
    }
};
