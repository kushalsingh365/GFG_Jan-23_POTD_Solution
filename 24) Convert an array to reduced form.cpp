class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	   // vector<int n>endl;
	   priority_queue<pair<int,int>>pq;
	    for(int i=0;i<n;i++){
	        pq.push({arr[i],i});
	    }
	    int count = n-1;
	    while(!pq.empty()){
	        int curr_index = pq.top().second;
	        pq.pop();
	        arr[curr_index]=count--;
	   
	    }
	}

};
