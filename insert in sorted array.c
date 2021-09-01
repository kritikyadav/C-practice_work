/*WAP to insert item in sorted array*/
#include<stdio.h>
#define size 20
main(){
	int a[size],i,n,item,pos;
	printf("enter num. of element: "); scanf("%d",&n);
	/*creat array*/
	for(i=0;i<n;i++){
		printf("enter number %d: ",i+1); /*index of array starts with 0 and user knows start as 1*/
		scanf("%d",&a[i]);
	}
	printf("enter element to store: "); scanf("%d",&item);
	printf("enter position to store: "); scanf("%d",&pos); pos--; /*array starts with 0*/
	/*shifting*/
	for(i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	/*insert*/
	a[i+1]=item; /*a[pos]=item*/
	n++; /*now array has one element extra */
	/*output*/
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
