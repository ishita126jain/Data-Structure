/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> v;
        if (root==NULL)
           return v;


    queue<Node*> q{{root}};

    while (!q.empty()) {
      vector<int> vec;
      for (int i = q.size(); i > 0; --i) {
        Node* node = q.front();
        q.pop();
        vec.push_back(node->val);
       for(auto value:node->children){
           q.push(value);
       }
     
    }
         v.push_back(vec);
    }
    return v;
    }
};
