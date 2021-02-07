// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long  int t;
    cin>>t;
    while(t--)
    {

      long long  int n;
        cin>>n;
        long long int sum =0;
        for(int i=0;i<n;i++)
        {
long long int x;
            cin>>x;
            sum =(sum+x)%n;
        }
        if(sum==0)
        {

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
      //  cout<<sum<<endl;
    }
}
