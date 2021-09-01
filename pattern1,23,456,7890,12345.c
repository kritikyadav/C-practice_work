/* print

1
23
456
7890
12345

*/
#include<stdio.h>
main()
{
	int i,n,j,t=1;
	printf("enter rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,t++)
			printf("%d",t%10);
		printf("\n");
	}
}
