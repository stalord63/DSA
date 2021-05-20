#include<bits/stdc++.h>
using namespace std;

	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	  return arr[n-2];
	}
int main()
{


int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i];
}

cout<<print2largest(a,n);

}