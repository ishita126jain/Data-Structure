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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
           return 0;
       }
        int l=0,r=0;
     if(root->left==NULL && root->right==NULL){
            return 1;
        }
        l=l+maxDepth(root->left)+1;
        r=r+maxDepth(root->right)+1;
        return max(l,r);
    }
};
