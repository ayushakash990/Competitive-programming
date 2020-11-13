
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll t; cin>>t; while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll k=(b*n)/(a+b);
        ll x=(a*k*k) + (b*(n-k)*(n-k));
        k++;
        ll y=(a*k*k) + (b*(n-k)*(n-k));
        cout<<min(x,y)<<endl;
    }
}
