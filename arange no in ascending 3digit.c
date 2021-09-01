/*WAP to arange 3 num in asscending order*/
#include<stdio.h>
main()
{
	int a,b,c,t;
	printf("enter numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(c<a)
	{
		t=c;
		c=b;
		b=a;
		a=t;
	}
	else if(c<b)
	{
		t=c;
		c=b;
		b=t;
	}
	
	printf("numbers in their ascending order is %d %d %d",a,b,c);
}
