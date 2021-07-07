class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
         pair<int,int> arr[n];
         for(int i=0;i<n;i++){
             arr[i].first=nums[i];
             arr[i].second=i;
         }
	    //Sorting
	    sort(arr,arr+n);
	    
	    vector<bool> visited(n,false);
	    int ans=0;
	    for(int i=0;i<n;i++){
	        //if visited or element in same position
	        int old_pos = arr[i].second;
	        if(visited[i] == true || old_pos==i)
	            continue;
	        //if not visited
	        int node=i,cycle=0;
	        while(!visited[node]){
	            visited[node]=true;
	            int next_node=arr[node].second;
	            node=next_node;
	            cycle+=1;
	        }
	        ans+=(cycle-1);
	    }
	    return ans;
	}
};
