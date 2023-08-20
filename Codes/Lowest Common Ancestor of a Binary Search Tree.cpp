/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        TreeNode* leftLCA = lowestCommonAncestor(root->left , p, q);
         TreeNode* rightLCA = lowestCommonAncestor(root->right , p, q);
        
        if(leftLCA !=NULL && rightLCA !=NULL){
            return root;
        }
        if(leftLCA !=NULL && rightLCA ==NULL ){
            return lowestCommonAncestor(leftLCA , p , q);
        }
        if(leftLCA ==NULL && rightLCA !=NULL ){
            return lowestCommonAncestor(rightLCA , p ,q);
        }
        return NULL;
    }
};
