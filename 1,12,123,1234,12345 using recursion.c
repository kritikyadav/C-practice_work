#include<stdio.h>
void col(int,int);
void row(int i,int n)
{
	if(i>n)
		return;
	col(1,i);
	printf("\n");
	row(i+1,n);
}
void col(int j,int n)
{
	if(j>n);
		return;
	printf("%d",j);
	col(j+1,n);
}
int main()
{
	int n=5;
	row(1,n);
	return 0;
}
