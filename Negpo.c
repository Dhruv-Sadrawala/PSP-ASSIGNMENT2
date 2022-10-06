#include <stdio.h>
void max(int a);
void main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	max(a);
}
void max(int a){
	if(a>0)
		printf("%d is positive\n",a);
	else if (a==0)
		printf("%d is 0\n",a);
	else
		printf("%d is negative\n",a);
}