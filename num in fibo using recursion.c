#include<stdio.h>
int fibo(int n)
{
	if(n==0||n==1)
		return n;
	return(fibo(n-1)+fibo(n-2));
}
main()
{
	int n,ans;
	printf("enter position: "); scanf("%d",&n);
	ans=fibo(n);
	printf("%d",ans);
}
