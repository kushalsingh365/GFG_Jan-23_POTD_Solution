// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                arr[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            arr[st.top()]=-1;
            st.pop();
        }
        return arr;
    }
};
