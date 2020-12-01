
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ar(n); for(int i=0; i<n; i++) cin>>ar[i];
        vector<int> a;
        vector<int> b;
        for(int i=0; i<n; i++){
            a.push_back(ar[i]-i);
            b.push_back(ar[i]+i);
        }
        sort(a.begin(),a.end()); sort(b.begin(),b.end());
        cout<<max(a[n-1]-a[0] , b[n-1]-b[0] )<<endl;
    }
}
