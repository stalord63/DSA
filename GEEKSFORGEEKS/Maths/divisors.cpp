#include<bits/stdc++.h>
using namespace std;
void divisors(int n){
    for(int i=1;i*i<=n;i++)
    {if(n%i==0)
    cout<<i<<" ";}
for(int j=n;j>=1;j--)
if(n%j==0)
cout<<n/j<<" ";



}
int main()
{

int n;
cin>>n;
divisors(n);
return 0;



}