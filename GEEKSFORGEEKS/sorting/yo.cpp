#include<bits/stdc++.h>
using namespace std;
int main()
char* checkBraces(char* input1){
int c=0;int x=0;
for(int i=0;i<strlen(input1);i++){
    if(input1[i]=='{')
   { c++;}
    
    if(input1[i]=='}'){
        x++;
    }
}
if(x==c)
return "error";
else return "correct";



}
int main()
{
 char a[20];
for(int i=0;i<5;i++){
    cin>>a[i];
}
cout<<(checkBraces(a));



 return 0;
}


