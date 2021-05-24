#include<bits/stdc++.h>
using namespace std;
int fact(int n){
if(n==0)
return 1;
else return n*fact(n-1);


}
int main()
{/*
int n;
cin>>n; ITERATIVRE SOLN IS BETTER.
int res=1;
for(int i=2;i<=n;i++){
    res=res*i;
    cout<<res;
}
cout<<res;*/
int n;
cin>>n;
cout<<fact(5);


return 0;}