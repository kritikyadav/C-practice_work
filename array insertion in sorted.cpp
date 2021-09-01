#include<stdio.h>
int main(){
	int a[50],i,n,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number to insert:- "); scanf("%d",&item);
	for(i=n-1;i>=0 && a[i]>item;i--){
			a[i+1]=a[i];
	}
	a[i+1]=item;
	n++;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
