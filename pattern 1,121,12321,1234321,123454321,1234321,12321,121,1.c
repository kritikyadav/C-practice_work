/* print

    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1

*/
#include<stdio.h>
main()
{
	int i,n,j,k,l;
	printf("enter rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("%d",k);
		for(l=i-1;l>=1;l--)
			printf("%d",l);
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(k=1;k<=n-i;k++)
			printf("%d",k);
		for(l=n-i-1;l>=1;l--)
			printf("%d",l);
		printf("\n");
	}	
}
