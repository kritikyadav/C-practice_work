/* WAP to print reverse of a number */
#include<stdio.h>
main()
{
	int a,i,n,rev;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;n>0;)
	{
		a=n%10;
		n=n/10;
		rev=rev*10+a;
	}
	printf("reverse of number is %d\n",rev);
}
