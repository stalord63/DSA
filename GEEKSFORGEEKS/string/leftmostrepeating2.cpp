// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

class Solution
{
    public:
    //Function to find repeated charact whose first appearance is leftmost.
    
    const int CHAR=256;
    
    int repeatedCharacter (string str) 
    { 
        bool a[CHAR];
        fill(a,a+CHAR,false);
        int res=-1;
        
        
        for(int i=str.length()-1;i>=0;i--){
            
            if(a[str[i]])
            res=i;
            else
            a[str[i]]=1;
            
            
        }
        return res;
    } 
};

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    Solution obj;
	    int index = obj.repeatedCharacter(s); 
        if (index == -1) 
            cout<<-1<<endl;
        else
            cout<<s[index]<<endl;
	}
	return 0;
}
  