#include<bits/stdc++.h>
using namespace std;
int anagram(string &s1,string &s2){

    if(s1.length()!=s2.length())
    return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);}
int main()
{


string s1,s2;
cin>>s1>>s2;
if(anagram(s1,s2))
cout<<"yes anagram";
else cout<<"not anagram";
return 0;


}