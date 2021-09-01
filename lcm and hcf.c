#include<stdio.h>
main()
{
	int n1,n2,i,comm,lcm;
	printf("enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
			comm=i;
	}
	lcm=n1*n2/comm;
	printf("LCM of %d and %d is: %d\n",n1,n2,lcm);
	printf("HCF of %d and %d is: %d",n1,n2,comm);
}
