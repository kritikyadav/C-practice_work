/* print

1
01
101
0101
10101

*/
#include<stdio.h>
main()
{
	int i,n,j;
	printf("enter rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			else
				printf("0");
		}	
		printf("\n");
	}
}
