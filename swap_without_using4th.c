/*WAP to swap three no. without using fourth variable*/
#include<stdio.h>
int a,b,c;
main(){
	printf("Enter three number: ");
	scanf("%d%d%d",&a,&b,&c);
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("After swaping numbers are: %d %d %d",a,b,c);
}
