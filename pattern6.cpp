
       
          #include<bits/stdc++.h>
using namespace std;
bool same(int x,int y){
    if((x%2==0)&&(y%2==0))
    return 1;
    else if((x%2!=0)&&(y%2!=0))
    return 1;
    else return 0;}
int main()
{

    
    
    
    

for(int i=1;i<=5;i++){

    for(int j=1;j<=9;j++){
        
       
          if((j>=(6-i))&&(j<=(4+i)))
       { if(same(i,j))
        cout<<"*";
        else cout<<" ";
           
       }
       
       else cout<<" "; 
        
    }
    
    cout<<endl;
}
return 0;



}
   