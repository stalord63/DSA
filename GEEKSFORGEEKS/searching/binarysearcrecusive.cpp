#include<bits/stdc++.h>
using namespace std;
int bs(int *arr,int low,int high,int x)
{
if(low>high){
return -1;}


int mid=(low+high) / 2;

if(arr[mid]==x){
return mid;}

else if(arr[mid]>x){
bs(arr,low,mid-1,x);}
else {bs(arr,mid+1,high,x);}
}
int main()
{
int a[100];
int n;
cin>>n;
int x;
cin>>x;
for(int i=0;i<n;i++){
    cin>>a[i];
}

int low=0;
int high=n-1;
int c=bs(a,low,high,x);
cout<<c;
return 0;
}