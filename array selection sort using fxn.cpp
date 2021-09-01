#include<stdio.h>
void selection_sort(int a[],int n){
	int i,j,t;
	// sorting 
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main()
{
	int a[50],i,n,j,t;
	printf("enter number:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	//output
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
