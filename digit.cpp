#include<stdio.h>
int main()
{
	int num1;
	int a,b,c;
	printf("Enter Number1: ");
	scanf("%i",&num1);//23
	a=num1/10; //2
	b=num1%10;//3
	c=a+b;
	printf("Addition of 2 digits is %i",c);
	
}
