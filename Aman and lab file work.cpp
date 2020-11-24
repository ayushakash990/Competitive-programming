#include <bits/stdc++.h>
using namespace std;


int main(){
   int n; cin>>n;
   vector< pair<int, int>> arr;
   for(int i=0; i<n;i++){
       int k;
       cin>>k;
       arr.push_back(make_pair(k,i));
       int t;
       cin>>t;
       arr[i].first+=t;
   }
   sort(arr.begin(), arr.end());
   for(int i=0; i<n;i++){
       cout<<arr[i].second+1<<" ";
   }
}
