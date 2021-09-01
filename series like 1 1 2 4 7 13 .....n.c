/*WAP to print series like 1 1 2 4 7 13 .....n*/
/*Lukas series*/
#include<stdio.h>
main()
{
	int i,n,a,b,c,d;
	printf("enter a number: ");
	scanf("%d",&n);
	a=0;
	b=0;
	c=0;
	d=1;
	while(i<=n)
	{
		printf("%d ",d);
		a=b;
		b=c;
		c=d;
		d=a+b+c;
		i++;
	}
}
