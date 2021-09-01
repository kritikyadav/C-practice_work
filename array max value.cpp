#include<stdio.h>
int main()
{
	int a[50],i,n,max,pos;
	printf("enter total number:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter %d number:- ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0,max=a[0];i<n;i++){
		if(a[i]>max){
			max=a[i];
			pos=i;
		}
	}
	printf("Max value is %d and pos is %d",max,pos+1);
}
