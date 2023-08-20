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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* Dummy_node=new ListNode(-1);
        Dummy_node->next=NULL;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* temp=Dummy_node;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                temp->next=temp1;
                temp1=temp1->next;
            }
            
            else if(temp1->val > temp2->val){
                temp->next=temp2;
                temp2=temp2->next;
            }
            else if(temp1->val==temp2->val){
               temp->next=temp1;
                 temp1=temp1->next;
                temp=temp->next;
                temp->next=temp2;
                 temp2=temp2->next;
            }
            temp=temp->next;
        }
        while(temp1!=NULL){
            temp->next=temp1;
            temp1=temp1->next;
            temp=temp->next;
        }
         while(temp2!=NULL){
            temp->next=temp2;
            temp2=temp2->next;
            temp=temp->next;
        }
        return Dummy_node->next;
    }
};
