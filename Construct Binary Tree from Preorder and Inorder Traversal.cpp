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
   
   TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return construct(preorder,inorder,0,0,inorder.size()-1);
    }
    
    int search(vector<int> inorder,int s,int e,int curr){
        for(int i=s;i<=e;i++){
            if(inorder[i]==curr){
                return i;
            }
        }
        return -1;
    }
    public:TreeNode* construct(vector<int>& preorder, vector<int>& inorder,int prestart,int instart,int inend){
        if(prestart>preorder.size() || instart>inend){
            return NULL;
        }
        int curr=preorder[prestart];
        prestart++;
        TreeNode* root = new TreeNode(curr);
        if(instart==inend){
            return root;
        }
        
        int pos=search(inorder,instart,inend,curr);
        root->left=construct(preorder,inorder,prestart,instart,pos-1);
        root->right=construct(preorder,inorder,prestart+pos-instart,pos+1,inend);
        
        return root;
    }
};
