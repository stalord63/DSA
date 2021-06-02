#include<bits/stdc++.h>
using namespace std;
int pal(string str){

string yo;
yo=str;
int low=0;
int high=yo.length()-1;
while(low<high)
{


swap(yo[low],yo[high]);
low++;
high--;



}
if(yo==str)
return 1;
else return 0;






}
int main()
{






string str;
cin>>str;
if(pal(str)){
    cout<<"palindrome";

}
else cout<<"not palindorme";
}