#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%4!=0)
			printf("%d ",i%4);
		else
			printf("4 ");
	}
}

