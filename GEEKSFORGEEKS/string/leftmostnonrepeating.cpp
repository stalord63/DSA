#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int leftmost(string &str){
int f[CHAR]={0};
for(int i=0;i<str.length();i++){
    f[str[i]]++;
}
for(int i=0;i<str.length();i++){
    if(f[str[i]]==1)
   { return i;}
}
return -1;
}
int main()
{

string s1;
cin>>s1;

cout<<leftmost(s1);
return 0;}
