#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        unordered_map<int , int> m;
        int a[n]; for(int i=0; i<n; i++) { cin>>a[i]; m[a[i]]++; }
        for(auto i: m){
            if(i.second==1){
                cout<<i.first<<endl;
                break;
            }
        }
    }
}
