#include<stdio.h>
int col(int n){
	static int i=1;
	if(n>0){
		col(n-1);
		printf("%d ",i);
		i++;
	}
}
int row(int n){
	if(n>0){
		row(n-1);
	}
	col(n);
	printf("\n");
}
int main(){
	int n;
	printf("enter rows= ");
	scanf("%d",&n);
	row(n);
}
