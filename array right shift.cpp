#include<stdio.h>
int main(){
	int a[50],i,n,t;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	t=a[n-1];
	for(i=n-1;i>0;i--){
		a[i]=a[i-1];
	}
	a[0]=t;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;	
}
