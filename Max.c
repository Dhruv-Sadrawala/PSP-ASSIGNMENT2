#include <stdio.h>
int max(int a,int b);
void main(){
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("%d is bigger\n",c);
}
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}