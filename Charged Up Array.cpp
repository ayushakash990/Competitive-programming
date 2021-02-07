// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
        }
        if(n>=64)
        {

            cout<<"0"<<endl;
        }
        int val= pow(2,n-1);
        int sum=0;
        for(int i=0;i<n;i++)
        {

            if(a[i]>=val)
            {

                sum = (sum+a[i]%1000000007)%1000000007;
            }

        }
        cout<<sum<<endl;
    }
}
