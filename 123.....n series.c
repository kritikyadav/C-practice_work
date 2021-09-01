/*WAP to print series like 1234.....n*/
#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		printf("%d,",i);
	}
	printf("\b ");
}
