#include<stdio.h>
int main()
{
	int num=5;
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;//1 2 6 24 120
	}
	printf("%i",fact);
}
