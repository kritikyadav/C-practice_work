#include<stdio.h>
main(){
	int a[20],i,n,pos;
	printf("enter num. of element: ");
	scanf("%d",&n);
	/*creat array*/
	for(i=0;i<n;i++){
		printf("enter number %d: ",i+1); /*index of array starts with 0 and user knows start as 1*/
		scanf("%d",&a[i]);
	}
	printf("enter pos to delete: ");
	scanf("%d",&pos);
	pos--;
	/*shifting*/
	for(i=pos;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--; /*now array has one element less */
	/*output*/
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}
