// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        sum =sum+a[i];
        if(sum<=x)
        {
           // cout<<sum;
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    }



}
