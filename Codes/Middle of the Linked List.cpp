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
    ListNode* middleNode(ListNode* head) {
         int l=0,mid;
        int s=1;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==1){
            return head;
        }
        if(l%2==0){
            mid=(s+(l-s)/2)+1;
        }
        else{
            mid=s+(l-s)/2;
        }
        temp=head;
      int x=mid-1;
        while(x--){
            temp=temp->next;
           
        }
        head=temp;
        return head;
    
    }
};
