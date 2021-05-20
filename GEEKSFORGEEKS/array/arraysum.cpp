
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    s=s+arr[i];
    
    
return s;    
}




// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];