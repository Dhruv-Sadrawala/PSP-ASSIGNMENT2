#include <stdio.h>
void range(int a,int b);
void main(){
	int a,b;
	printf("Enter a range\n");
	scanf("%d %d",&a,&b);
	range(a,b);
}
void range(int a,int b){
	int counter=0;
	while(a<=b){
		if (a%2==0)
			{
				printf("%d\n",a);
				counter++;
			}
		a++;
	}
	printf("total even nos is %d",counter);
}