#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int anagram(string &s1,string &s2){
int n=s1.length();
int f[CHAR]={0};
for(int i=0;i<n;i++){


    f[s1[i]]++;
    f[s2[i]]--;
}

for(int i=0;i<CHAR;i++){

    if(f[i])
    return 0;
}
return 1;

}






int main()
{


string s1,s2;
cin>>s1>>s2;
if(anagram(s1,s2))
cout<<"yes anagram";
else cout<<"not anagram";
return 0;


}