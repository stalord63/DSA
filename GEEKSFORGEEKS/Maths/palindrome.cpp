#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int t=n;

int rev=0;
while(n!=0){
    int ld=n%10;
    rev=rev*10+ld;
    n=n/10;}
    if(t==rev){
        cout<<"PALINDORME";
    }else cout<<"NOT PALINDROME";



return 0;}