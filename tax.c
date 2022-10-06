#include <stdio.h>
void main(){
	int salary;
	char gender,M,m,F,f;
	printf("Enter 'M' for male\nEnter 'F' for female\n");
	scanf("%c",&gender);
	printf("Enter your salary ");
	scanf("%d",&salary);
	
	{
	if(gender=='M' || gender=='m'){
		if(salary>=150000)
			printf("Your salary is taxable\n");
		else
			printf("Your salary is not taxable\n");
	}
	if(gender=='F' || gender=='f'){
		if(salary>=180000)
			printf("Your salary is taxable\n");
		else
			printf("Your salary is not taxable\n");
		}
		}

}
