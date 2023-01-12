
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
    int dfs(Node *node){
        if(!node)return 0;
        
        int left=dfs(node->left);
        int right=dfs(node->right);
        int p=node->data;
        node->data=left+right;
        return node->data+p;
    }
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        
        dfs(node);
    }
};
