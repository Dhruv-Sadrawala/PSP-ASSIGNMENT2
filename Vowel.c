#include <stdio.h>
void max(char n,char a,char e,char i,char o,char u, char A,char I,char E,char O,char U);
void main(){
	char n,a,e,i,o,u,A,I,E,O,U;
	printf("Enter a character\n");
	scanf("%c",&n);
	max(n,a,e,i,o,u,A,I,E,O,U);
}
void max(char n,char a,char e,char i,char o,char u, char A,char I,char E,char O,char U){
	if(n=a||e||i||o||u||A||E||I||O||U)
		printf("%c is vowel\n",n);
	else
		printf("%c is consonat\n",n);
}