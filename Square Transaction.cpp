
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
   ll n,q;
       cin>>n;
       int a[n];
       for(int i=1; i<=n; i++) cin>>a[i];
       cin>>q;
       ll target;
      while(q--)
       {
           ll s=0,flag=0;
           cin>>target;
           for(int i=1; i<=n; i++)
           {
              s+=a[i];
              if(s>=target) 
              {
                  flag=1;
                  cout<<i<<endl;
                  break;
              }
           }
          if(flag==0) cout<<-1<<endl;
       }
   }
