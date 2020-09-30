#include<stdio.h>

int main()
{
	int i,j,n,m; 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   m=0;
	   for(j=1;j*j<=i;j++)
	   {
				if(i%j==0)
				{
					if(j==i/j)
						m++;
					else
						m+=2;
				}
			}
	    if(m==2)
	    printf("%d\n",i);
	}
	return 0;
}
