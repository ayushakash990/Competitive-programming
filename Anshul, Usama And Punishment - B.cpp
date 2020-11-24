
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n+1],p=2,q=3,base=2,max=0;
    a[0]=2;
    a[1]=3;
    for(int i=2; i<n; i+=2)
     {
         a[i]= pow(p,base);
         a[i+1]=pow(q,base);
         base++;
     }
     for(int i=0;i<n-1;i++)
      {
       if((a[i]+a[i+1])+ abs(a[i]-a[i+1]) > max)
                {
                    max=a[i]+a[i+1]+ abs(a[i]-a[i+1]);
                }
      }
     cout<<max*10<<endl;
}
