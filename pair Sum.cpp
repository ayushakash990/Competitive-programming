#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
   ll n, target, sum=0,flag=0;  cin>>n>>target;
   ll a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a,a+n); ll l=0,h=n-1;
   while(l<h)
   {
       sum=a[l]+a[h];
       if(sum==target) { flag=1; break; }
       else if(sum>target) h--;
       else l++;
   }
  
    if(flag==1) cout<<"YES";
    else cout<<"NO";
   
}
