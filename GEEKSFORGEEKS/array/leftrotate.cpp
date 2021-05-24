#include <bits/stdc++.h>
using namespace std;
void reverse(long long *num,long long low,long long high){
        
        while(low<high){
            swap(num[low],num[high]);
            low++;
            high--;
        }}

int main() {

int t;
cin>>t;
while(t--){
    long long n;
   
    cin>>n;
    long long a[n+1];
    long long d;
    cin>>d;
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    d=d%n;
   
   /* reverse(a,0,n-1);
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    */
    
    
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    
    for(long long i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    
    
    
    
    
    cout<<endl;
    
}

	return 0;
}