#include<stdio.h>
int main(){
	int a[50],i,n,pos,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number to insert:- "); scanf("%d",&item);
	printf("enter position to insert:- "); scanf("%d",&pos);
	pos--;
	n++;
	for(i=n-1;i>pos;i--){
		a[i]=a[i-1];
	}
	a[pos]=item;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
