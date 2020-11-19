#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[n],k,q,tc;
    cin>>n; 
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a[k]++;
    }
    cin>>q;
    while(q--)
    {
        cin>>tc;
        if(a[tc]>0) cout<<a[tc]<<endl;
        else cout<<"NOT PRESENT\n";
    }
    
}
