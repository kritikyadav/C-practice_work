#include<stdio.h>
#define SIZE 10
int merging(int a[],int l1,int u1,int l2,int u2){
	int i,j,k,t[SIZE];
	for(i=l1,j=l2,k=l1;i<=u1 && j<=u2;k++){
		if(a[i]<a[j])
			t[k]=a[i++];
		else
			t[k]=a[j++];
	}
	//remaining of first file
	while(i<u1)
		t[k]=a[i++];
	//remaining of second file
	while(j<u2)
		t[k]=a[j++];
	for(i=l1;i<=u2;i++)
		a[i]=t[i];
	return 0;
}
int mergesort(int a[],int lb,int ub){
	int mid;
	if(lb<ub){		//we are checking that there are multiple elements in our array
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merging(a,lb,mid,mid+1,ub);		//it will work when backtrack starts
	}
	return 0;
}
int main(){
	int a[SIZE],n,i;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	//Input array
	for(i=0;i<n;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	//output array
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		
	return 0;}}
