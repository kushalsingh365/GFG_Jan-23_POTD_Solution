//User function Template for C++
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution {
  public:
    vector<int> maximumValue(Node* node) {
        //code here
        vector<int>ans;

        queue<Node*>q;

        q.push(node);

        while(!q.empty())

        {

            int n=q.size();

            int maxi=0;

            while(n--)

            {

               Node *ptr=q.front();

               q.pop();

               maxi=max(maxi,ptr->data);

               if(ptr->left)

               q.push(ptr->left);

               if(ptr->right)

               q.push(ptr->right);

            }

            ans.push_back(maxi);

        }

        return ans;
    }
};
