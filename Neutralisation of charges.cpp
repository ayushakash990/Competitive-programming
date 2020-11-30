#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<char> v;
   char ch; cin>>ch;
   v.push_back(ch);
   for(int i=1; i<n; i++){
       cin>>ch;
       if(ch==v[v.size()-1]){
           v.erase(v.begin()+v.size()-1);
       }
       else v.push_back(ch);
   }
   cout<<v.size()<<endl;
   for(auto i: v){
       cout<<i;
   }
   
}
