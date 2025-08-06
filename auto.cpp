#include<stdio.h>
int main()
{
	static int i=90;
	printf("%i",i);
	i=100;
	printf("%i",i);
}


