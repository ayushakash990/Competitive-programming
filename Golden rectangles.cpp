#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n,ans=0; cin>>n;
   // struct rect ar[n];
    while(n--)
    {
        double a,b,c;
        cin>>a>>b;
        if(a>b)
         {
              c=a/b;
             if(c >=1.6 && c<=1.7) ans++;
         }
        else if(a<b)
        {
            c=b/a;
            if(c >=1.6 && c<=1.7) ans++;
        }
        
    }
    cout<<ans<<endl;
}
