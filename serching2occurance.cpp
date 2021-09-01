#include<stdio.h>
#include<conio.h>
main(){
	char s1[100],s2[]="collage";
	int i,j,found,cnt=0;
	printf("Enter the string: "); gets(s1);
	found=0,i=0,j=0;
	while(s1[i]!='\0'){
		if(s1[i]==s2[j]){
			while(s1[i+j]==s2[j]&&s2[j]!='\0'){
				j++;
			}
			if(s2[j]=='\0'){
				cnt++;
				if(cnt==2){
					found=1;
					break;
				}
			}
			j=0;
		}
		i++;
	}
	if(found==1)
		printf("String found at %d",i+1);
	else
		printf("string not found");
	getch();
	return 0;
}

