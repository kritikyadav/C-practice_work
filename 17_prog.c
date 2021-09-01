6.5	WAP to print all those elements of a matrix that are not present in either of the two diagonals.
1.	#include<stdio.h>
2.	#include<conio.h>
3.	#include<stdlib.h>
4.	void main()
5.	{
6.		int m1[10][10],r,c,i,j;
7.		clrscr();
8.		printf("Enter row & column of diagonal matrix:");
9.		scanf("%d%d",&r,&c);
10.		if(r!=c)
11.		{
12.			printf("Row & Column must be same for diagonal marix");
13.			getch();
14.			exit(1);
15.		}
16.		/*input matrix*/
17.		for(i=0;i<r;i++)
18.			for(j=0;j<c;j++)
19.			{
20.				printf("Enter element %d,%d:",i+1,j+1);
21.				scanf("%d",&m1[i][j]);
22.			}
23.		/*Displaying non diagonal elements*/
24.		for(i=0;i<r;i++)
25.			for(j=0;j<c;j++)
26.			{
27.				if(i!=j && i+j!=r-1)
28.				{
29.					printf("%d\t",m1[i][j]);
30.				}
31.			}
32.		getch();
33.	}
