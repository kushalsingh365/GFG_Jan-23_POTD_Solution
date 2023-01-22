class Solution{
public:
  //long long countSubstring(string S){
    // code here
    long long countSubstring(string a){
      long long ans =0 ;
      int sum =0 ,belowSum =0 ;
      unordered_map<int,int> m;
      m[0]++;
      for(auto &i:a){
          i=='0' ? sum-- : sum ++;
          i=='0' ? belowSum -= m[sum] : belowSum += m[sum-1];
          ans += belowSum;
          m[sum]++;
      }
      return ans;
  
  }
};
