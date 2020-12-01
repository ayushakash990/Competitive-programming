
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t; while(t--)
   {
       int h1,m1,h2,m2,h3,m3;
       cin>>h1>>m1>>h2>>m2;
       int x = (h1*60)+m1;
       int y = (h2*60)+m2;
       int k=y-x;
       cout<<k/60<<" "<<k%60<<endl;
   }

}
