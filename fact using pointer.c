#include<stdio.h>
void fact(int*i){
	int ans=1,f=1;
	for(ans=1;ans<=*i;ans++){
		f=f*ans;
	}
	*i=f;
}
main(){
	int n;
	printf("enter number= ");
	scanf("%d",&n);
	fact(&n);
	printf("factorial=%d",n);
}
