// BY AYUSH AKASH
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


int t;
cin>>t;
while(t--)
{

    string p;
    cin>>p;
    string r;
    r=p;
    stringstream s(p);
    int k=0;
     s>>k;
    int l=0;
    for(int i=0;i<r.length();i++)
    {
        if((r[i]=='2')&&(r[i+1]=='1'))
        {
            l++;
        }
    }
  //  cout<<l;
    if(l!=0 || k%21==0)
    {
        cout<<"The streak is broken!"<<endl;
    }
    else
    {
        cout<<"The streak lives still in our heart!"<<endl;
    }
}

}
