#include<stdio.h>
#include<conio.h>
int main(void)
{
	int m[3][4];
	
	printf("\n%d",m);/*address of 1st row*/
	printf("\n%d",&m[0]);/*address of 1st row*/
	
	printf("\n%d",m[0]);/*address of 1st element*/
	printf("\n%d",&m[0][0]);/*address of 1st element*/
	
	printf("\n%d",&m);/*address of entire two dim. array*/

	printf("\n%d",m+1);/*address of 2nd row*/
	printf("\n%d",&m[0]+1);/*address of 2nd row*/
	
	printf("\n%d",m[0]+1);/*address of 2nd element of 1st row*/
	printf("\n%d",&m[0][0]+1);/*address of 2nd element of 1st row*/
	
	printf("\n%d",&m+1);/*address of next 2 dim. array*/
	f1(m);
	getch();
	return 0;
}
void f1(int m[][4])
{
}
or
void f1(int (*p)[])
{
}