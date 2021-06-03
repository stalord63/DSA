/*#include<bits/stdc++.h>
using namespace std;
int sub(string s1,string s2){
int n=s1.length();
int m=s2.length();
int i=0,j=0;
for( i=0;i<n&&j<m;i++){


    if(s1[i]==s2[j])
    j++;
}


return(j==m);




}
int main()
{


string s1,s2;
cin>>s1>>s2;
if(sub(s1,s2))
cout<<"yes";
else cout<<"no";


return 0;

}*/
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        int n=A.length();
        int m=B.length();
        int j=0;
        for(int i=0;i<m&&j<n;i++)
        {
            if(A[i]==B[j])
            {
                j++;
            }
        }
        if(j==n)
        return 1;
        else return 0;
    }
};

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends