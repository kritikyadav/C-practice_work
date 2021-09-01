/*complete sorting of 2-d array*/
#include<stdio.h>
#include<conio.h>
void sort(int [][10],int,int);
int main()
{
	int m[10][10],r,c,i,j;
	printf("Enter how many rows & cols ");
	scanf("%d%d",&r,&c);

	/*Matrix Input*/
	for(i=0;i<r;++i)
		for(j=0;j<c;j++)
		{
			printf("Enter element %d,%d ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	
	printf("\nBefore Sort\n");
	for(i=0;i<r;i++)
	{        
		for(j=0;j<c;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
	sort(m,r,c);

	printf("\nAfter Sort\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
void sort(int m[][10],int r,int c)
{
	int i,j,k,l;
	/*Complete Sort*/
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c-1)
				k=i+1;
			else
				k=i;
			for(;k<r;k++)
			{
				if(i==k)
					l=j+1;
				else
					l=0;
				for(;l<c;l++)
				{
					if(m[i][j]>m[k][l])
					{	
						int t=m[i][j];
						m[i][j]=m[k][l];
						m[k][l]=t;
					}
				}
			}
		}
	}
}
