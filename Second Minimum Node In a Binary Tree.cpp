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
    int firstmin=INT_MAX;
    int secondmin=INT_MAX;
    int count=0;
    void findFirstMinimumValue(TreeNode* root){
        if(root->left!=NULL){
            findSecondMinimumValue(root->left);
        }
        firstmin = min(firstmin,root->val);
        if(root->right!=NULL){
            findSecondMinimumValue(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        findFirstMinimumValue(root);
        
        if(root->left!=NULL){
            findSecondMinimumValue(root->left);
        }
        if(root->val>firstmin && root->val<=secondmin){
            count++;
            secondmin=root->val;
        }
        if(root->right!=NULL){
            findSecondMinimumValue(root->right);
        }
        
        if(count==0){
            return -1;
        }
        return secondmin;
    }
};
