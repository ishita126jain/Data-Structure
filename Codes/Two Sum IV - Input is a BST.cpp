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
    vector<int> v;
    vector<int> inorder(TreeNode* root)
    {   
        if(root == NULL){
            return v;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        
        return v;
    }   
    
    
    bool findTarget(TreeNode* root, int k) {
        v= inorder(root);
        
        int start=0;
        int end=v.size()-1;
        while(start<end){
             if(v[start]+v[end]==k){
            return true;
        }
        else if(v[start]+v[end]>k){
            end--;
        }
        else{
            start++;
        }
       
        }
       return false;
    }
};
