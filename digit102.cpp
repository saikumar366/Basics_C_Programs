#include<stdio.h>
int main()
{
	int number,a,b,c,d;
	printf("Enter 3 digit number ");
	scanf("%i",&number);//123
	a=number/100;//1
	b=number%100;//23
	c=b/10;//2
	d=b%10;//3
	printf("%i %i %i",a,c,d);
}
