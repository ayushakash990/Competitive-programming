
#include <iostream>

using namespace std;

int main() {
	    int n; cin>>n;
                int a[n],i,j,k=-1;
                 for(i=0;i<n;i++) cin>>a[i];
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<=n-1;j++)
      {
          if(a[i] >= a[j]) ;
          else break;
      }
      if(j==n) 
      {
        //if(k != a[i]) { 
            cout<<a[i]<<" "; 
          //  k=a[i];}
        //else if(k == a[i]) break;
      }
   }
   cout<<a[n-1]<<endl;

}
