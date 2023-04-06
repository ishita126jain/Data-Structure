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
    int heigth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        
        int lheigth = heigth(root->left);
        int rheigth = heigth(root->right);
        
        return max(lheigth,rheigth)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        int lheigth = heigth(root->left);
        int rheigth = heigth(root->right);
        
        int curr_diameter = lheigth + rheigth ;
        
        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);
        
        return max(curr_diameter,max(ldiameter,rdiameter));
    }
};
