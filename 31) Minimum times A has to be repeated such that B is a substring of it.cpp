class Solution {

  public:

    int minRepeats(string A, string B) {

       int c = 1;

       string s = A;

       while(A.length() <B.length() )

       {

           A = A + s;

           c++;

       }

       

       if(A.find(B) != -1)

        {

            return c;

        }

         A = A +s;

         c++;

         if(A.find(B) != -1)

            return c;

        return -1;

     

        

    }

};
