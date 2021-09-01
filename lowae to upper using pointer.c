/*WAP to convert char from lower to upper case*/
#include<stdio.h>
void toup(char*c){
	if(*c>=97||*c<=122)
		*c-=32;
}
main(){
	char ch;
	printf("enter character= ");
	ch=getchar();
	toup(&ch);
	putchar(ch);
}
