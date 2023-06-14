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
    TreeNode* ans = new TreeNode(0);
    TreeNode* temp = ans;
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL){
            return ans->right;
        }
        increasingBST(root->left);
        TreeNode* newnode = new TreeNode(root->val);
        temp->right=newnode;
        temp = newnode;
        increasingBST(root->right);
       

        return ans->right;
    }
};
