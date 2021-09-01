#include<stdio.h>
int col(int j,int i){
	if(i>0){
		col(1,i-1);
		printf("*",j);
		j++;
	}
}
int row(int n){
	if(n>0){
		row(n-1);
	}
	col(1,n);
	printf("\n");
}
int main(){
	int n;
	printf("enter rows: "); scanf("%d",&n);
	row(n);
	return 0;
}
