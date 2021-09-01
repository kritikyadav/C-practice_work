/* print

*       *
 *     *
  *   * 
   * *
    *
   * *
  *   *
 *     *
*       *

*/   
#include<stdio.h>
main()
{
	int i,n,j,k;
	printf("enter rows: ");
	scanf("%d",&n);
	if(n%2==0)
		n++;
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			if(j==1||j==2*i-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			if(j==1||j==2*i-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
