#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i+1;j>=1;j--)
			printf("%d",n-j-i+2);
		printf("\n");
	}
		
}

