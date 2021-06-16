#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int a[], int n)
    { int res=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
for(auto x:m){
    if(x.second==1){
        res++;
    }
} return res;}
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}