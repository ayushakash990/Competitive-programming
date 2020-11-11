#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t; while(t--)
    {
     int n,sum=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)    cin>>a[i];
     sort(a,a+n);
     for(int i=0;i<n-1;i++)   sum+=a[i];
     if(sum>a[n-1]) cout<<"Yes\n";
     else cout<<"No\n";
    }
return 0;
}     
