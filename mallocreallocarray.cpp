#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int*a,i,n;
	printf("total element: "); scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	if(a==NULL){
		printf("memory overflow");
		getch();
		exit(1);
	}
	//inserting
	
	for(i=0;i<n;i++){
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	//realloc
	
	a=(int*)realloc(a,(n+2)*sizeof(int));
	if(a==NULL){
		printf("memory overflow");
		exit(1);
	}
	for(i=n;i<n+2;i++){
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	//output
	for(i=0;i<n+2;i++){
		printf("%d ",a[i]);
	}
	free(a);
	a=NULL;

}

