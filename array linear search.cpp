#include<stdio.h>
int main(){
	int a[50],i,n,pos,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter item to be searched:- "); scanf("%d",&item);
	
	for(i=0;i<n;i++){
		if(a[i]==item){
			printf("item found at position= %d",i+1);
		}
	}
	return 0;
}
