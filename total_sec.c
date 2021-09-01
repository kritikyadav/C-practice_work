/*WAP to find total seconds by taking input from user in hrs,min,sec*/
#include<stdio.h>
int h,m,s;
main(){
	printf("enter time(hrs,mins,sec): ");
	scanf("%d%d%d",&h,&m,&s);
	printf("total seconds= %d",h*3600+m*60+s);
}
