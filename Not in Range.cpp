#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll sum(ll l, ll r){
    ll s=0;
    for(int i=l; i<=r; i++) s+=i;
return s; 
}

int main(){
    int n; cin>>n;
    int L[n] , R[n];
    for(int i=0; i<n; i++) cin>>L[i]>>R[i];
    sort(L, L+n);
    sort(R, R+n);
    ll sum1=0;
    sum1 = sum(1 , L[0]-1);
    for(int i=1; i<n; i++){
        if(L[i] > R[i-1]  &&  (R[i-1] + 1  != L[i]) ){
            sum1+=sum(R[i-1]+1 , L[i]-1);
        }
    }
    
    sum1+=sum(R[n-1]+1 , 1000000);
    cout<<sum1;
}
