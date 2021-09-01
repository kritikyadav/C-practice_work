#include<stdio.h>
main(){
	int a[50],i,n,sum=0;
	float avg;
	printf("enter no. of num:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("Avg= %.2f",avg);
	return 0;
}
