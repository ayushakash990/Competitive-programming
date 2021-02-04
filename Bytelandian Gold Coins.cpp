// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
map<long long int ,long long int>coin;
long long int coins(long long int n)
{
   if(n==0)
   {

       return n;
   }
   if(coin[n]!=0)
   {

       return coin[n];
   }
   long long int ans = max(n,coins(n/2)+coins(n/3)+coins(n/4));
   coin[n]=ans;
return coin[n];
}
int main()
{
   long long  int n;
    while(cin>>n)
    {

        cout<<coins(n)<<endl;
    }

}
