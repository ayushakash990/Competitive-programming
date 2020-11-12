#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t; while(t--)
    {
      int n; cin>>n;
      int p,a[n],i,q;
      for(i=1;i<=n;i++) a[i]=0;
      cin>>p;
      for(i=1;i<=p;i++)
      {
          int k;
          cin>>k;
          a[k]++;
      }
      cin>>q;
      for(i=1;i<=q;i++)
      {
          int k;
          cin>>k;
          a[k]++;
      }
      for(i=1;i<=n;i++)
      {
          if(a[i]==0) break;
      }
     if(i>n) cout<<"YES\n";
     else cout<<"NO\n"; 
    }
    
}
