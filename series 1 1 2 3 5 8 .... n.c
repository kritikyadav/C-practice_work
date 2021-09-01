/*WAP to print series like 1 1 2 3 5 8 13 .....n*/
/*Fibonaki series*/
#include<stdio.h>
main()
{
	int i,n,a,b,c;
	printf("enter a number: ");
	scanf("%d",&n);
	a=0;
	b=0;
	c=1;
	while(i<=n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
		i++;
	}
}
/* another way
a=0;
b=1;
while(i<=n){
	c=a+b;
	printf("%d",b);
	a=b;
	b=c;
	i++;
}*/
