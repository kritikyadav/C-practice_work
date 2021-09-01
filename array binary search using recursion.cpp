#include<stdio.h>
binary_search(int a[],int l,int h,int item){
	int m;
	if(l>h){
		return -1;
	}
	m=(l+h)/2;
	if(a[m]==item){
		return m;
	}
	else if(item>a[m]){
		return binary_search(a,m+1,h,item);
	}
	else{
		return(binary_search(a,l,m-1,item));
	}
}
int main(){
	int a[50],i,n,pos,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter item to be searched:- "); scanf("%d",&item);
	pos=binary_search(a,0,n-1,item);
	if(pos==-1){
		printf("item not found");
	}
	else{
		printf("item found at %d",pos+1);
	}
	return 0;
}
