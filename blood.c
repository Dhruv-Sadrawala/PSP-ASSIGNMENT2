#include <stdio.h>
void function(int age,int weight);
void main(){
	int age,weight;
	printf("Enter your age ");
	scanf("%d",&age);
	printf("Enter your weight ");
	scanf("%d",&weight);
	function(age,weight);
}
void function(int age,int weight){
	if(age<=18 && age>=55 || weight>45)
		printf("You are not elegible for blood donation\n");
	else
		printf("You are elegible for blood donation\n");
}