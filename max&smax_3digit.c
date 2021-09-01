/*WAP to find max and second max of 3 numbers*/
#include<stdio.h>
main()
{
	int a,b,c,max,smax;
	printf("enter 3 num: ");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>max)
		smax=max;
		max=b;
	if(c>max)
		smax=max;
		max=c;
	printf("max is %d and second max is %d",max,smax);
}
