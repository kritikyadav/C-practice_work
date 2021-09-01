#include<stdio.h>
main(){
	int n;
	printf("enter month number= ");
	scanf("%d",&n);
	switch(n){
		case 1: case 3:case 5:case 7:case 8:case 10:case 12:
			printf("this month have 31 days");
			break;
		case 4:case 6:case 9:case 11:
			printf("this month have 30 days");
			break;
		case 2:
			printf("this month have 28 days and in leap year it has 29 days");
			break;
		default:
			printf("invalid input");
			break;
	}
}
