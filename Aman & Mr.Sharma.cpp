
#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n,c=0; cin>>n;
    while(n--)
    {
        int r,x; cin>>r>>x;
        if((44*r) <= x*700) c++;
    }
    cout<<c;

}
