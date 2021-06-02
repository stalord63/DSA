#include<bits/stdc++.h>
using namespace std;
int pal(string str){

int n=str.length();
int low=0;
int high=n-1;
while(low<high){

if(str[low]!=str[high])
return 0;
low++;
high--;


}
return 1; 






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