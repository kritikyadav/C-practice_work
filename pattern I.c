/* print

*****
  *
  *
  *
*****
   
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
			if(i==1||j==n/2+1||i==n)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
