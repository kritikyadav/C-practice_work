/* print

*   *
**  *
* * *
*  **
*   *

   
*/
#include<stdio.h>
main()
{
	int i,n,j;
	printf("enter rows: ");
	scanf("%d",&n);
	if(n%2==0)
		n++;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			if(j==i||j==1||j==n)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
