/*WAP to swap two no. without using third variable*/
#include<stdio.h>
int a,b;
main(){
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping numbers are: %d %d",a,b);
}
