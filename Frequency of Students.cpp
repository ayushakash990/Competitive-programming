#include <bits/stdc++.h>
using namespace std;


int main(){
   int n; cin>>n;
   map< string ,int> m;
   while(n--){
       string a;
       cin>>a;
       m[a]++;
   }
   map< string , int> :: iterator it;
   for(auto it=m.begin(); it!=m.end(); it++){
       cout<<it->first<<" " << it->second << endl;
   }
         
}
