class Solution {
  public:
    //long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long int minIncrements(vector<int> a, int n) {

        // Code here

        long long int count=0;

        map<int ,int> mapy;

        for(int i=0;i<a.size();i++)

        {

            mapy[a[i]]++;

        }

        for(int i=0;i<a.size();i++)

        {

            if(mapy[a[i]]>=2)

            {

                mapy[a[i]]--;

                while(mapy.find(a[i])!=mapy.end())

                {

                    a[i]++;

                    count++;

                }

                mapy[a[i]]++;

            }

        }

        return count;
    }
};
