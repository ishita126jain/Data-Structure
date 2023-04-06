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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* root1=root;
        if(root==NULL){
            return NULL;
        }
       
         TreeNode* temp = root->left;
         root->left=root->right;
         root->right=temp;
    
        invertTree(root->left);
        invertTree(root->right);
       return root1;
    }
};
