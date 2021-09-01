#include<stdio.h>
main()
{
	int a,i,n,t,rev;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	for(i=1;n>0;)
	{
		a=n%10;
		n=n/10;
		rev=rev*10+a;
	}
	printf("reverse of number is %d\n",rev);
	if(t==rev)
		printf("number is palindrome");
	else
		printf("number is not palindrome");
}
