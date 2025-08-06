#include<stdio.h>
int square(int n1);//declaration of function which return int value
int main()
{
	int a;
	for(int i=1;i<=10;i++)
	{
		a=square(i);
		printf("%i ",a);
	}
}
int square(int n1)//defination of function
{
	return n1*n1;
}
