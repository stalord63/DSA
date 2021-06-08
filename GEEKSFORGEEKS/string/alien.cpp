#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    void topo(int u,unordered_set<int> adj[],vector<bool> &vis,string &s)
{
    vis[u]=true;
    
    for(auto i:adj[u])
    if(!vis[i])
    topo(i,adj,vis,s);
    
    s.insert(s.begin(),'a'+(char)u);
}
    string findOrder(string dict[], int N, int K) {
       unordered_set<int> adj[K];
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<min(dict[i].length(),dict[i+1].length());j++)
        {
            if(dict[i][j]!=dict[i+1][j])
            { 
                adj[dict[i][j]-'a'].insert(dict[i+1][j]-'a');
                break;
            }
        }
    }
    string s;
    vector<bool> vis(K,false);
    
    for(int i=0;i<K;i++)
    if(!vis[i])
    topo(i,adj,vis,s);
    
    return s;
    }
};

// { Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();
