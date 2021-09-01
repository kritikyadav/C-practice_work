#include<stdio.h>
main()
{
	int a[50] ,n,j ,t ,i ,item;
	printf("enter length: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)  
	{
		printf("enter for place %d in array: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		item=a[j+1];
		for(j=i-1; j=0 && a[j]>item ;j--){
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;	
		}
		a[j+1]=item;
	}
	
	for(i=0;i<n;i++)                  //array printing
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
