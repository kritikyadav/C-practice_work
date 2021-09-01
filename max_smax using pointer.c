#include<stdio.h>
void max_smax(int a,int b,int c,int *p1,int *p2){
	if (a>b){
		*p1=a;
		*p2=b;
	}
	else{
		*p2=a;
		*p1=b;
	}
	if(c>*p1){
		*p2=*p1;
		*p1=c;
	}
	else if(c>*p2){
		*p2=c;
	}
}
void main(){
	int a,b,c,max,smax;
	printf("enter three numbers: "); scanf("%d%d%d",&a,&b,&c);
	max_smax(a,b,c,&max,&smax);
	printf("max is %d, second max is %d",max,smax);
}

