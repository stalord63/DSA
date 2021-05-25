#include<bits/stdc++.h>
using namespace std;
void  f(int *a,int n){

int f=1,i=1;
while(i<n){
while(i<n&&a[i]==a[i-1])
{

f++;
i++;
}
cout<<a[i-1]<<" "<<f<<endl;
i++;
f=1;

}
if(n==1||a[n-1]!=a[n-2])
cout<<a[n-1]<<" "<<"1"<<endl;
}

int main()
{
    
int a[20]={1,1,1,2,2,2,2,3,3,3,4,4,4,4};


int n=(sizeof(a)/sizeof(a[0]));
f(a,n);

return 0;

}