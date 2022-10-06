#include <stdio.h>
int max(int a,int b,int c);
void main(){
	int a,b,c,d;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	d=max(a,b,c);
	printf("%d is bigger\n",d);
}
int max(int a,int b,int c){
	if(a>b && a>c)
		return a;
	else if(b>c && b>a)
		return b;
	else if(c>b && c>a)
		return c;
}