#include<stdio.h>
int main(){
	int a[50],i,n,pos,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter position to delete:- "); scanf("%d",&pos);
	pos--;
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
