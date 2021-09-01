/* WAP to print number of digits in a number */
#include<stdio.h>
main()
{
	int a,i,n,digits;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;n>0;digits+=1)
	{
		a=n%10;
		n=n/10;
	}
	printf("digits in number is %d\n",digits);
}
