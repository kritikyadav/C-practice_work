#include<stdio.h>
main(){
	int a[20],b[20],i,j,n1,n2;
	printf("enter total ele in 1 and 2: ");
	scanf("%d%d",&n1,&n2);
	for(i=j=0;i<n1,j<n2;i++,j++){
		printf("enter %d for array1: ",i+1); scanf("%d",&a[i]);
		printf("enter %d for array2: ",j+1); scanf("%d",&b[j]);
	}
	for(i=0;i<n1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n2;i++){
		printf("%d ",b[i]);
	}
}

