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
   
    map<int,int> m;
    void frequency(TreeNode* root){
        if(root->left!=NULL){
            findMode(root->left);
        }
        m[root->val]++;
        if(root->right != NULL){
            findMode(root->right);
        }
    }
   
    
    vector<int> findMode(TreeNode* root) {
        frequency(root);
        vector<int> ans;
        int maxi=INT_MIN;
        for(auto i:m){
            maxi = max(i.second,maxi);
        }
        for(auto i:m){
            if(i.second==maxi){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
