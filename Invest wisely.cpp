#include <iostream>
 
using namespace std;
long int max(long int a,long int b){
	return a>b?a:b;
}
int main() {
	int num;
	cin >> num;
	while(num--){
       long int n,ans=0;
	   cin>>n;
	   long int a[n];
	   for(int i=0;i<n;i++){
		   cin>>a[i];
	   } long int m=a[n-1];
	   for(int i=n-1;i>=0;i--){
		   m=max(m,a[i]);
           ans+=m-a[i];
	   }
	   cout<<ans<<endl;
	}	
	}