#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int*a,i,n,pos;
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
	//deleting element
	printf("enter pos to del item: ");
	scanf("%d",&pos);
	pos--;
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	
	//realloc
	
	a=(int*)realloc(a,(n-1)*sizeof(int));
	//output
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	free(a);
	a=NULL;

}
