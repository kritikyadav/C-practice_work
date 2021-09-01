#include<stdio.h>
main()
{	
	float n,a,b;
	printf("enter number: ");
	scanf("%f",&n);
	b=0.0001;
	for(a=0;a<n;a=a+b)
	{
		if(a*a>n)
		{
			a=a-b;
			break;
		}
	}
	printf("sqrt of %.1f is: %.2f",n,a);
}
