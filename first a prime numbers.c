/*WAP to print first given prime numbers*/
#include<stdio.h>
main()
{
	int n,i,Prime,a,c=1;
	printf("number of prime numbers to print: ");
	scanf("%d",&a);
	for(n=1;c<=a;n++)
	{
		if(n==1)
			Prime=0;
		else
		{
			Prime=1;
			for(i=2;i<=n/2;i++)
			{
				if(n%i==0)
				{
					Prime=0;
					break;
				}
			}
			if(Prime==1)
			{
				printf("%d\n",n);
				c++;
			}
		}
	}
}
