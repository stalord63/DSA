#include<bits/stdc++.h>
using namespace std;
int maximum(int *a,int n){

int maxi=a[1]-a[0];
int miny=a[0];
for(int i=0;i<n;i++){
 maxi=max(maxi,a[i]-miny);
miny=min(miny,a[i]);



}
return maxi;





}
int main()
{
int a[1000];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<maximum(a,n);


}