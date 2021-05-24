#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
 
    vector<int> sieveOfEratosthenes(int n)
    {vector<int> isPrime(n+1,1);
        for(int i=2;i<=n;i++)
       { if(isPrime[i])
       {
       
        for(int j=i*i;j<=n;j=j+i)
        isPrime[j]=0;}
    }
        vector<int> res;
        for(int i=2;i<=n;i++){
            if(isPrime[i]==1)
            {
                res.push_back(i);
            }
        }
        return res;
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver