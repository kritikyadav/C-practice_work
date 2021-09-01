#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int*a,i,t,n,j;
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
	for(i=0,j=n-1;i<j;i++,j--){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	//output
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	free(a);
	a=NULL;

}
