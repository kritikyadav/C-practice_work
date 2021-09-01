/*WAP to cal. remainder without using % operator*/
#include<stdio.h> 
int N,D; 
main(){
	printf("Enter numerator and denominator: ");
	scanf("%d%d",&N,&D);
	printf("remainder is: %d",N-D*(N/D));
}
