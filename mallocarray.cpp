#include<stdio.h>
#include<stdlib.h>
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
	//output
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	free(a);
	a=NULL;
}


