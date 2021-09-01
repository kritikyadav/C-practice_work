/*WAP to print series like 1 -1 1 -1 1.....n*/
#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(i%2==0)
			printf("-1 ");
		else
			printf("1 ");
		i++;
	}
}
