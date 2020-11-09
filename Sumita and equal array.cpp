#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
       int n,x,y,z,t; cin>>n>>x>>y>>z;
       int a[n],flag=0;
       for(int i=0; i<n; i++){
           cin>>t;
           while(t%x == 0){
               t/=x;
           }
           while(t%y == 0){
               t/=y;
           }
           while(t%z == 0){
               t/=z;
           }
           a[i]=t;
       }
       for(int i=1; i<n; i++){
           if(a[0]!=a[i]){
               flag=1;
               break;
           }
       }
       if(flag) cout<<"She can't\n";
       else cout<<"She can\n";
    
}
return 0;
}
