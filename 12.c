12.1	Write a program to count the number of characters, spaces, tab, new lines in a file
	#include<stdio.h>
	#include<conio.h>
	main( )
	{
		FILE *fp;
		char ch;
		clrscr();
		int lines=0,tab=0,space=0, characters=0;
		fp=fopen(“text.c”,”r”);
		while(1)	/* infinite loop*/
		{
			ch = fgetc(fp);
			if(ch= =EOF)
				break;
			characters++;
			if(ch= = 32)
				space++;
			if(ch= = ‘\n’)
				lines++;
			if(ch= = ‘\t ’)
				tab++;
		}
		fclose(fp);
		printf(“number of lines = %d\ntabs = %d\ncharacters = %d\nspaces = 
			%d”,lines,characters,spaces);
		getch( );
	}
