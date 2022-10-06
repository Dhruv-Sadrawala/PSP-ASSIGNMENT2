#include <stdio.h>
void max(int a);
void main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	max(a);
}
void max(int a){
	if(a%2==0)
		printf("%d is even\n",a);
	else
		printf("%d is odd\n",a);
}