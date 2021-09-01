/* print

    *
   * *
  *****
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
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			if(i==n/2+1||j==1||j==2*i-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
