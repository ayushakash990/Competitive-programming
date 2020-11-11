#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
   ll n; cin>>n;
   ll a[n],num;
   for(int i=1;i<=n;i++) cin>>a[i];
   cin>>num;
   map<int,int> f;
   for(int i=1;i<=n;i++) f[a[i]]++;
   for(auto ch: f)
   {
       if(ch.second == num)
        {
            cout<<ch.first;
            break;
        }
   }
}
