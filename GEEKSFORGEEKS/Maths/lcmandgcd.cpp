#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  
  long long gcd(int a,int b ){
      
      if(b==0)
      return a;
      else return gcd(b,a%b);
      
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> res;
        long long lcm=((A*B)/gcd(A,B));
        res.push_back(lcm);
        long long  gc=gcd(A,B);
        res.push_back(gc);
        return res;}
        
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  /