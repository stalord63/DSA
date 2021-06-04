#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
    public:  
    
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& vect, int n)
    { 
        int i,j;
        int temp[n][n];
         for (i = 0; i < n; i++){
    
        for ( j = 0; j < n; j++)
        {
            temp[i][j]=vect[j][i];
        }   }
        for (i = 0; i < n; i++){
    
        for ( j = 0; j < n; j++)
        {
            vect[i][j]=temp[i][j];}}
        
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
