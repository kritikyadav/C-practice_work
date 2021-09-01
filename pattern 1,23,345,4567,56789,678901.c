/* print

1
23
345
4567
56789
678901

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
			printf("%d",(j+i-1)%10);
		printf("\n");
	}
}
