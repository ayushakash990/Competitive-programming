#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t ; while(t--)
    {
        int n,m; cin>>n>>m;
        int a[n],i,c=0,max=0;
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=n;i++)
        {
            if(a[i] > max) 
            {
                max=a[i];
                c++;
            }
        }
    //if(c==n-1) c++;
    cout<<c*m<<endl;
    }
}
