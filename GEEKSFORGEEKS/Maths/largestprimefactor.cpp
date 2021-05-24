#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
       if(n<=1) return 1;
       
       int max=0;
       for(int i=2;i<=n;i++){
           while(n%i==0)
           {
               if(i>max)
               max=i;
               n=n/i;
           }
           
           
           
           
           
           
           
       }
       if(max==0){
           max=n;}
       return max;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}  // } Driver Code 