class Solution {
  public:
    string removePair(string s) {
        // code here
        if(s == "")
            return "-1";
        if(s.size() == 1)
            return s;
        for(int i = 1;i < s.size();i++)
            if(s[i] == s[i-1])
                s = removePair(s.substr(0,i-1)+s.substr(i+1,s.size()));
        return s;
    }
};
