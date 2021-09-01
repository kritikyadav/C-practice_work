/*WAP to print sum of 3 digit no.*/
#include<stdio.h>
int n,a,b;
main(){
	printf("enter a 3 digit number: ");
	scanf("%d",&n);
	a=n%10;					/* if n=123 then a=123%10 which is a=3*/
	n=n/10;					/* n/10 n=12*/
	b=n%10;					/* n%10 = 2 therefore b=2*/
	n=n/10;					/* n/10 = 1*/
	printf("reverse of this three digit number is: %d",a*100+b*10+n);
}
