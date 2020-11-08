#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t; cin>>t; while(t--)
    {
        ll n,ans=0; cin>>n;
        ll h[1001]={0}; 
        ll a[n]; for(int i=0;i<n;i++) { cin>>a[i]; h[a[i]]++;}
        for(int i=1;i<1001;i++)
         {
             for(int j=i; j<1001; j++)
              {
                  int s,c;
                  s=sqrt(i+j);
                  c=cbrt(i+j);
                  if((i+j) == s*s || (i+j)==c*c*c){
                      if(i==j){
                          ans = ans + h[i]*(h[i]-1)/2;
                      }
                      else ans=ans+h[i]*h[j];
                  }
              }
         }
         cout<<ans<<endl;
    }
}
