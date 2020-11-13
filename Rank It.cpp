#include <bits/stdc++.h>
using namespace std;

/*int binsearch(int a[], int n, int key)
{
    int low=0; 
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==key) return mid+1;
        else if(key > a[mid])
         {
             low=mid+1;
         }
         else
         {
             high=mid-1;
         }
    }
    return -1;
}*/

int bs(int a[], int low, int high, int key)
{
    if(low<=high)
    {
        int mid= (low+high)/2;
        if(a[mid] == key) return mid+1;
        else if(key>a[mid]) return bs(a,mid+1,high,key);
        else return bs(a,low,mid-1,key);
    }
    return -1;
}

int main()
{
    int n,i;
    cin>>n;
    int a[n] , qs;
    for(i=0;i<n;i++) cin>>a[i];
    cin>>qs;
    int q[qs];
    for(i=0;i<qs;i++) cin>>q[i];
    sort(a,a+n);
    for(i=0;i<qs;i++)
    {
        cout<<bs(a,0,n-1,q[i])<<endl;
        //cout<<binsearch(a,n,q[i])<<endl;
    }
}
