/* print

   4
  434
 43234
4321234
 43234
  434
   4
   
*/
#include<stdio.h>
main()
{
	int i,n,j,k,l;
	printf("enter rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(k=n;k>=i;k--)
			printf("%d",k);
		for(l=i+1;l<=n;l++)
			printf("%d",l);
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(k=n;k>=i;k--)
			printf("%d",k);
		for(l=i+1;l<=n;l++)
			printf("%d",l);
		printf("\n");
	}
}
