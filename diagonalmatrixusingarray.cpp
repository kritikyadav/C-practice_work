#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int m[10][10],i,j,r,c;
	printf("enter rows and columns: ");
	scanf("%d%d",&r,&c);
	if(r!=c){
		printf("not a diagonal matrix");
		getch();
		exit(0);
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter at %d%d of matrix: ",i+1,j+1);
			scanf("%d",&m[i][j]);
			if(i==j){
				if(m[i][j]==0){
					printf("not a diagonal matrix");
					getch();
					exit(0);
				}
			}
			else{
				if(m[i][j]!=0){
					printf("not a diagonal matrix");
					getch();
					exit(0);
				}
			}
		}
	}
	
	printf("\nit is a daigonal matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
