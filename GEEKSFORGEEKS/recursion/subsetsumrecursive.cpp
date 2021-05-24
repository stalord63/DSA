#include<bits/stdc++.h>
using namespace std;
int subsetsum(int *arr,int n,int sum){
if(n==0)
return (sum==0)?1:0;
else return subsetsum(arr,n-1,sum)+
subsetsum(arr,n-1,sum-arr[n-1]);



}
int main()
{
int a[1000];
int sum;
cin>>sum;

int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<subsetsum(a,n,sum);
return 0;

}