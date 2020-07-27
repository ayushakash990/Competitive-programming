int main(){
	int i,j,n,m; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    m=0;
	    for(j=1;j<=n;j++)
	    {
	    if(i%j==0)
	    m++;
	    }
	    if(m==2)
	    printf("%d ",i);
	}
return 0;
}