#include<stdio.h>
int printDigit(int);
int main()
{
	int c;
	c=printDigit(10);
	printf("\n%i ",c);
}
int printDigit(int z)
{
	z++;
	return z;
}
