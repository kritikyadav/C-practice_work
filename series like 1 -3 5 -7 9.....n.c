/*WAP to print series like 1 -3 5 -7 9.....n*/
#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(i%2==0)
			printf("%d ",1-2*i);
		else
			printf("%d ",2*i-1);
		i++;
	}
}
