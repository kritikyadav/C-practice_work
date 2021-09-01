#include<stdio.h>
int gcd(int a,int b)
{
	if(b!=0)
		return gcd(b,a%b);
	return(a);
}
main()
{
	int a,b,ans;
	printf("enter two number: "); scanf("%d%d",&a,&b);
	ans=gcd(a,b);
	printf("Greatest common divisor of %d and %d is: %d",a,b,ans);
}
