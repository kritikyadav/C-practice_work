/*WAP to convert F into C*/
#include<stdio.h>
float F;
main(){
	printf("enter temprature in F: ");
	scanf("%f",&F);
	printf("Temprature in C: %.2f",(F-32)*5/9);
}
