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
    int diff=INT_MAX;
    int temp = -1;
    int getMinimumDifference(TreeNode* root) {
        if (root->left != NULL){
            getMinimumDifference(root->left);
        }
        if(temp>=0)
        diff = min(diff,root->val - temp);
        temp = root->val;

        if (root->right != NULL){
            getMinimumDifference(root->right);
        }
        return diff;
    }
};
