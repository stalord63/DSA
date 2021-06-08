#include<bits/stdc++.h>
using namespace std;


class solution{


public:

void merge(int *arr,int low,int mid, int high){




int i=low;int j=mid;
while(i<mid&&j<high){

if(arr[i]>arr[j]){
    cout<<arr[i++]<<" ";
}else cout<<arr[j++]<<" ";
}
while(i<mid){
    cout<<arr[i++]<<" ";
}
while(j<high){
    cout<<arr[j++]<<" ";
}



}



};



int main()
{

int n;
cin>>n;
int a[100];
for(int i=0;i<n;i++){
cin>>a[i];}


solution ob;
ob.merge(a,0,n/2,n);
for(int i=0;i<n;i++){
    cout<<a[i];
}



return 0;



}