#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long a[n],s1=0,s2=0,s3=0;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(i%3 == 0)s1+=a[i];
        if(i%3 == 1)s2+=a[i];
        if(i%3 == 2) s3+=a[i];
    }
   
    cout<<s1<<" "<<s2<<" "<<s3;
}
