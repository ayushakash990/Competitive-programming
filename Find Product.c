#include<stdio.h>

const long int mod=1e9+7;

int main()
{
   long int ans;
   int n;
   scanf("%d",&n);
   int a[n],i;
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   ans=1;
   for(i=0;i<n;i++)
			ans=((ans%mod)*(a[i]%mod))%mod;
   printf("%ld",ans);
   return 0;
}
