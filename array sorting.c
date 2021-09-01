//sorting in array
#include<stdio.h>
main()
{
	int i,n;
	printf("enter length of array: "); scanf("%d",&n);
	int array[n];                   //array declaration
	for(i=0;i<n;i++)                //input value in array 
	{
		printf("enter for place %d in array: ",i);
		scanf("%d",&array[i]);
	}
	{                               //array sortimg 
		int t,j,s;                // t for swaping, j fro loopin i , s for sort type
		printf("type 1 for assending order, 2 for decemding order: "); scanf("%d",&s);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(s==1)
				{
					if(array[i]>array[j])            //i>j assending order
					{					            
						t=array[i];
						array[i]=array[j];
						array[j]=t;
					}				
				}
				if(s==2)
				{
					if(array[j]>array[i])           // j>i decending order
					{					            
						t=array[i];
						array[i]=array[j];
						array[j]=t;
					}
				}	
			}
		}
	}
	for(i=0;i<n;i++)                  //array printing
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
