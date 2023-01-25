class Solution {

  public:

    int minOperation(string s) {

        int n=s.length(),len=1;

        for(int i=0;i<n/2;i++)

        {

            string fir=s.substr(0,i+1);

            string sec=s.substr(i+1,i+1);

            if(fir==sec)len=max(len,i+1);

        }

        return n-len+1;

    }

};
