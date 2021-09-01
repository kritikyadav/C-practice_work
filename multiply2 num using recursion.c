#include<stdio.h>
int mult(int a,int b)
{
	if(b==1)
		return a;
	return(a+mult(a,b-1));
}
main()
{
	int a,b,ans;
	printf("enter 2 num: "); scanf("%d%d",&a,&b);
	ans=mult(a,b);
	printf("%d",ans);
}
