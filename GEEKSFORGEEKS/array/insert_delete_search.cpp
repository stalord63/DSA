#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}// } Driver Code Ends


/* Complete the function(s) below */

bool searchEle(int *a,int x)

{ int i;
int n=100;
    for (i = 0; i < n; i++)
        if (a[i] == x)
            return 1;
    return 0;
}
bool insertEle(int *a,int y,int yi)
{ int n=100;
   if(yi>=n)
   return 0;
   else a[yi]=y;
   return 1;
    
   
}
bool deleteEle(int *a,int z)
{int i;
    int len=(sizeof(a)  /sizeof(a[0]));
    for( i=0;i<len;i++)
    {if(a[i]==z)
    break;
    if(i==len)
    return 0;}
   for(int j=i;j<len;j++)
  { a[j]=a[j+1];}
  return 1;
   
   
}