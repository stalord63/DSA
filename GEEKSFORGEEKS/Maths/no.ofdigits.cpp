#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int rev=0;
while(n!=0)

{

n=n/10;
rev++;
}

cout<<rev;
return 0;
}