#include<bits/stdc++.h>
using namespace std;
long long power(long long  x,long long  n){

if(n==0){
return 1;}
long long  res=1;
while(n!=0){
    res=res*x;
    x=x*x;
    n=n/2;
}
return res;



}
int main()
{

long long  x,n;
cin>>x>>n;
cout<<power(x,n);
return 0;



}