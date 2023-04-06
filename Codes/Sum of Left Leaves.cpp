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
    int sum=0;
    int count=0;
    int sumOfLeftLeaves(TreeNode* root) {
    
        if(root == NULL){
            return 0;
        }
        
        if(root->left==NULL && root->right ==NULL){
           
            sum=sum+root->val;
        }
       sumOfLeftLeaves(root->left);
        if(root->right !=NULL && (root->right->left!=NULL || root->right->right))
         sumOfLeftLeaves(root->right);
         count++;
        
        if(count==1){
            return 0;
        }
       return sum; 
    }
};
