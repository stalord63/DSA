 #include<bits/stdc++.h>
 using namespace std;
   int power(int N,int R)
    {
       if(R==0)
       return 1;
     int t=power(N,R/2);
       t=t*t;
       if(R%2==0)
       return t;
       else return t*N;
        
    }
    int main()
    {
       int n,x;
        cin>>x>>n;
        cout<<power(x,n);






        return 0;
    }