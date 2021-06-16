#include<bits/stdc++.h>
using namespace std;
void freq(int *arr,int n){
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto x:m){
		cout<<x.first<<" "<<x.second<<endl;
	}
 
 
 
}
 
int main() {
	int arr[6]={1,2,2,3,4,4};
	int n=6;
	freq(arr,n);
	return 0;
}
