#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,q,l,r; cin>>n;
        int a[n]; for(int i=0; i<n; i++) cin>>a[i];
        cin>>q;
        while(q--){
            cin>>l>>r;
            unordered_map<int,int> m;
            for(int i=l-1; i<r; i++){
                m[a[i]]++;
            }
            cout<<m.size()<<'\n';
        }
        
    }
