
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 	cin >> n;									
    int a[n],max=INT_MIN,index=0;
    for(int i=0;i<n; i++) cin>>a[i];
    for(int i=0;i<n;i++)
     {
         int z=0;
         int o=0;
         for(int j=i;j<n;j++)
          {
              if(a[j] == 0) z++;
              else o++;
              int diff=o-z;
              if( diff> max){
                  max=diff;
                  index=j-i+1;
              }
              if(diff == max){
                  if(index< j-i+1){
                      index=j-i+1;
                  }
              }
              
              
              }
               
          }
          cout<<index<<endl;
     }
