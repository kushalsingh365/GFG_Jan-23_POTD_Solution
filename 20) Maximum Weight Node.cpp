class Solution

{

  public:

  int maxWeightCell(int n, vector<int> Edge)

  {

      // code here

      int weight[n];

      memset(weight,0,sizeof(weight));

      for(int i=0;i<n;i++)

        {

          if(Edge[i]!=-1)

             weight[Edge[i]]+=i;

        }

      int max_weight=INT_MIN;

      int max_index=INT_MIN;

      for(int i=0;i<n;i++)

        {

           if(weight[i]>max_weight)

              {

                 max_weight=weight[i];

                 max_index=i;

              }

           else if(weight[i]==max_weight)

              {

                 max_index=max(max_index,i);

              }

        }

     return max_index;

 

   }

};
