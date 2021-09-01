#include<stdio.h>
main(){
	int a[20],b[20],c[40],n1,n2,n3,i,j,t;
	printf("Enter the number of elements for  First Array  :  ");
 	scanf("%d", &n1);     //Array Size Declaration
 	for(i = 0; i < n1; i++)
  	{
  		printf("element %d:",i+1);
      	scanf("%d", &a[i]);
  	}
  	printf("Enter the number of elements for  Second Array  :  ");
 	scanf("%d", &n2);    //Array Size Declaration
 	for(i = 0; i < n2; i++)
  	{
  		printf("elements %d:",i+1);
      	scanf("%d", &b[i]);
  	}
	n3 = n1 + n2;
	for(i=0;i<n1;i++)
  	{
      	c[i] = a[i];
  	}
 	for(i=0,j=n1;j<n3&&i<n2;i++,j++)
  	{
  		c[j] = b[i];
  	}
  	//sorting in c[]
  	for(i=0;i<n3-1;i++){
  		for(j=i+1;j<n3;j++){
  			if(c[i]>c[j]){
  				t=c[i];
  				c[i]=c[j];
  				c[j]=t;
			  }
		  }
	  }
	//output
	for(i=0;i<n3;i++){
		printf("%d ",c[i]);
	}
	free(a);
	free(b);
	free(c);
	a=b=c=NULL;
	
}
