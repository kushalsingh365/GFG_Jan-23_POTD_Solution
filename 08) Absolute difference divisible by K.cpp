class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
         vector<long long> a(k, 0);
        long long sol = 0;
        
        for(int i = 0; i < n; i++)
        {
            a[arr[i]%k]++;
        }
        
        for(auto i: a)
        {
            sol += (i*(i-1))/2;
        }
        
        return sol;
    }
};
