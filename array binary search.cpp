#include<stdio.h>
int main(){
	int a[50],i,n,item;
	printf("enter total number:- "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter item to be searched:- "); scanf("%d",&item);
	//searching 
	int l=0,h=n-1,m,f=0;
	while(l<=h){
		m=(l+h)/2;
		if(a[m]==item){
			f=1;
			break;
		}
		else if(item<a[m]){
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	if(f==1){
		printf("item found at %d",m+1);
	}
	else{
		printf("Item is not present in given array");
	}
	return 0;
}
