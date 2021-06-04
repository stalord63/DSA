#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
    void reverseword(string &str,int n){
       int start=0;
for(int i=0;i<n;i++){
if(str[i]== ' ')
{
      
reverse(str,start,i-1);
start=i+1;

}


    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);

}
int main()
{

string s1;
getline(cin,s1);
int n=s1.length();

reverseword(s1,n);
cout<<s1;

return 0;}
