#include<stdio.h>
#define size 20
int linear_search(int[],int,int);
main(){
	int a[size],i,n,item,pos;
	printf("enter num of ele: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number: ",i+1); scanf("%d",&a[i]);
	}
	printf("enter number to search "); scanf("%d",&item);
	
	pos=linear_search(a,n,item);
	if(pos==-1)
		printf("number not found");
	else
		printf("number found at %d position",pos+1);
	return 0;
}
int linear_search(int b[],int n, int item){
	int i,pos;
	for(i=0;i<n;i++){
		if(b[i]==item){
			pos=i;
			return pos;
		}
	}return(-1);
	
}
