
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],target;
    map<int, int> m;
    for(int i=0;i<n;i++) { cin>>a[i]; m[a[i]]=i;}
    cin>>target;
   cout<<m[target];
//if(f==0) cout<<-1;
}
