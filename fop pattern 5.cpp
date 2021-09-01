#include<stdio.h>
main(){
	int n,num=1,i=1,space=0,k=1;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	int number=n;
	for(i=0;i<n;i++)
	{
		for(int j=1;j<=space;j++)
		{
			printf("-");
		}
	for(int m=1;m<2*n-space;m++)
	{
		if(m%2==0)
			printf("*");
		else
			printf("%d",num++);
	}
	printf("*");
	for(int l=1;l<2*n-space;l++)
	{
		if(l%2==0)
			printf("*");
		else
		{
			printf("%d",k+number*number);
			k++;
		}
	}
	number--;
	space=space+2;
	printf("\n");
	}	
	return 0;
}
