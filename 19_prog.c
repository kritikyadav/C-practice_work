/*WAP to prepare a one-dimensional array a[n2] from a 2 dimensional array m[nxn] that will have all the elements of array m if they are stored in row-major form and a one-dim array b[n2] in column-major form. for example for the following array

1     	2     	3    	4
5     	6     	7    	8
9   	10   	11  	12
13 		14   	15  	16
the resultant array a will be 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16, and
the resultant array b will be 1 5 9 13 2 6 10 14 3 7 11 15 4 8 12 16 
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[10][10],a[100],b[100],i,j,n,cnt1=0,cnt2=0;
	printf("Enter number of rows of square matrix:");
	scanf("%d",&n);
	/*Input matrix*/
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("Enter element %d,%d:",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	
	/*copy matrix in a & b array*/
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			a[cnt1++]=m[i][j];
			b[cnt2++]=m[j][i];
		}
	
	/*Display a array */
	printf("\nRow major    =");
	for(i=0;i<cnt1;i++)
		printf("%d ",a[i]);
	printf("\nColumn major =");
	for(i=0;i<cnt2;i++)
		printf("%d ",b[i]);
	getch();
}
