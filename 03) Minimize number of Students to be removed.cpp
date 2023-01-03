class Solution {
  public:
    int removeStudents(int a[], int N) {
        // code here
        const int INF = 1e9; 
        vector<int> d(N+1, INF); 
        d[0] = -INF; 
        for (int i = 0; i < N; i++){
            int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin(); 
            if (d[j-1] < a[i] && a[i] < d[j])
            d[j] = a[i];
        } 
        int ans = 0; 
        for (int i = 0; i <= N; i++) { 
            if (d[i] < INF) 
            ans = i; 
        } 
        return N - ans;
    }
};
