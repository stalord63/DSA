#include<bits/stdc++.h> 
using namespace std;
int sod(int n){

if(n==0) return 0;
return sod(n/10)+n%10;



}
int main()
{

int n;
cin>>n;
cout<<sod(n);
return 0;


}