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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        return fun(head,0,n-1);
    }
    TreeNode* fun(ListNode* head,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid = (left+right)/2;
        ListNode *helper = head;
        int i=mid;
        while(i--){
            helper=helper->next;
        }
        TreeNode *temp = new TreeNode(helper->val);
        temp->left = fun(head,left,mid-1);
        temp->right = fun(head,mid+1,right);

        return temp;
    }
};
