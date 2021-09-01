#include<stdio.h>
main()
{
	int a[50] ,n,j ,t ,i ;
	printf("enter length: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)  
	{
		printf("enter for place %d in array: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--){
		t=a[i];
		a[i]=a[j];
		a[j]=t;	
	}
	
	for(i=0;i<n;i++)                  //array printing
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
