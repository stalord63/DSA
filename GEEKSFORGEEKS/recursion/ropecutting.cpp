#include<bits/stdc++.h>
using namespace std;
int max(int i,int j,int k){
    return i > j? (i > k? i: k): (j > k? j: k);
}
int rope(int n,int a,int b,int c){

if(n==0) return 0;
if(n<0)  return -1;


int res=max(rope(n-a,a,b,c),rope(n-b,a,b,c),rope(n-c,a,b,c));

if(res==-1) return -1;
else return res+1;





}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<rope(n,a,b,c);
}