#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
    
     vector<int> curr;
  
     curr.push_back(a[n-1]);
        int t=a[n-1];
     for(int i=n-2;i>=0;i--)
        {
            if(t<=a[i]){
        t=a[i];
        curr.push_back(a[i]);}
    }
    
    
    reverse(curr.begin(),curr.end());
    return curr;}
    
};

// { Driver Code Starts.
