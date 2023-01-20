
class Solution{
public:
 // vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
      // code here
      vector<int> maximumToys(int n,vector<int> arr,int q,vector<vector<int>> queries){
      vector<int> ans;
      
      vector<int> vp;
      for(int i=0;i<arr.size();i++)
      {
          vp.push_back(arr[i]);
      }
      sort(vp.begin(),vp.end());
      vector<long long> pref(n,0);
      pref[0] = vp[0];
      for(int i=1;i<n;i++)
      {
          pref[i] = pref[i-1]+vp[i];
      }
      int qr = 0;
      for(auto it:queries)
      {
          
          int c = it[0];
          vector<int> bekar;
          for(int i=2;i<it.size();i++)
          {
              bekar.push_back(arr[it[i]-1]);
          }
          sort(bekar.begin(),bekar.end());
        
          
          int idx = upper_bound(pref.begin(),pref.end(),c)-pref.begin();
          idx--;
          if(idx<0)
          {
              ans.push_back(0);
              continue;
          }
          
          
          int cnt = 0;
          unordered_map<int,int> mp;
          for(auto tm:bekar)
          {
              int id = lower_bound(vp.begin(),vp.end(),tm)-vp.begin();
              int tid = id;
              
              if(mp.find(id)!=mp.end())
              {
                  id = mp[id]+1;
                  mp[tid] = id;
              }
              else{
                  mp[tid] = id;
              }
              

              if(id<=idx)
              {
                  c+=tm;
                  cnt++;
                  idx = upper_bound(pref.begin(),pref.end(),c)-pref.begin();
                  idx--;
              }
              
              
          }
          
          ans.push_back(idx+1-cnt);
          
          
      }
      
      
      
      
      
      return ans;
  }
};
