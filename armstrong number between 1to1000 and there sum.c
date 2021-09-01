/*WAP to print all Armstrong number between 1 to 1000 and then print there sum*/
#include<stdio.h>
#include<math.h>
main()
{
	int n,a,old,sum,cnt,ts=0;
	for(n=1;n<=1000;n++)
	{
		/*count number*/
		old=n;
		cnt=0;
		while(n!=0)
		{
			n=n/10;
			cnt++;
		}
		/*new number*/
		sum=0;
		n=old;
		while(n!=0)
		{
			a=n%10;
			sum=sum+pow(a,cnt);
			n=n/10;
		}
		if(old==sum)
		{
			printf("%d\n",old);
			ts=ts+old;
		}
		n=old;
	}
	printf("total sum of Armstrong number between 1 to 1000 is: %d",ts);
}
