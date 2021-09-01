#include<stdio.h>
#include<conio.h>
main() {
	int a,b,N;
	printf("enter two no.= ");
	scanf("%d%d",&a,&b);
	printf("1 ADD\n2 SUB\n3 MUL\n4 DIV\nEnter your choice = ");
	scanf("%d",&N);
	switch(N){
		case 1:
			printf("sum= %d",a+b);
			break;
		case 2:
			printf("sub= %d",a-b);
			break;
		case 3:
			printf("product= %d",a*b);
			break;
		case 4:
			printf("divide= %f",(float)a/b);
			break;
		default:
			printf("invalid selection");
			break;
	}
}
