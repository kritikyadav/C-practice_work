//WAP to Add two matrix
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int m[10][10],n[10][10],o[10][10],i,j,r,c;
	printf("enter rows and columns: ");
	scanf("%d%d",&r,&c);
	// first matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter %d%d of first matrix: ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	// second matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter %d%d of second matrix: ",i+1,j+1);
			scanf("%d",&n[i][j]);
		}
	}
	//adding both matrix into third matrix
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			o[i][j]=m[i][j]+n[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",o[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
