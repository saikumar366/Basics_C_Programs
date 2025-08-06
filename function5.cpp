#include<stdio.h>
void swap(int,int);
int main()
{
	int i,j;
	puts("Enter Number1 ");
	scanf("%i",&i);
	puts("Enter Number2 ");
	scanf("%i",&j);
	printf("\nValues before swapping");
	printf("No1 %i",i);
	printf("No2 %i",j);
	swap(i,j);
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("After Swapping");
	printf("No1 %i",x);
	printf("No2 %i",y);
}
