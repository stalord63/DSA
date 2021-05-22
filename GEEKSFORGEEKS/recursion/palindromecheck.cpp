#include<bits/stdc++.h>
using namespace std;
bool ispal(string &str,int start,int end){

if(start>=end)
return true;
else return ((str[start]==str[end])&&ispal(str,start+1,end-1));





}
int main()
{

string str;
cin>>str;
int start=0;
int end=str.length()-1;
if(ispal(str,start,end))
cout<<"palindrome";
else cout<<"mot palindrome";


return 0;

}