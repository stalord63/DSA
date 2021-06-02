#include<bits/stdc++.h>
using namespace std;
int sub(string s1,string s2){
int n=s1.length();
int m=s2.length();
int i=0,j=0;
for( i=0;i<n&&j<m;i++){


    if(s1[i]==s2[j])
    j++;
}


return(j==m);




}
int main()
{


string s1,s2;
cin>>s1>>s2;
if(sub(s1,s2))
cout<<"yes";
else cout<<"no";


return 0;

}