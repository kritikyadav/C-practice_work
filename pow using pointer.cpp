#include<stdio.h>
void power(int*a,int*p){
	int ans,b;
	for(ans,b=1;ans<=*p;ans++){
		b=*a*b;
	}
	*a=b;
}
main(){
	int n,i;
	printf("enter number= ");
	scanf("%d",&n);
	printf("enter power= ");
	scanf("%d",&i);
	power(&n,&i);
	printf("power=%d",n);
}
