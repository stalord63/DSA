#include<bits/stdc++.h>
using namespace std;

bool searchEle(int *a,int x)

{
    int n=100;
    
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==x)
        flag=true;
        break;
        
    }if(flag==true)
    return 1;
    else return 0;
}
int main()
{


int n;
cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<searchEle(a,x);
}