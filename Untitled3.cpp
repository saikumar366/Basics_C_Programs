#include<stdio.h>
int main()
{
	int age=40;
	int *ptr;
	printf("\n Age %i",age);
	printf("\n address of age %i",&age);
	ptr=&age;
	printf("\npointer stores address of age %u ",ptr);
	printf("\nAge using pointer %i",*ptr);
}

