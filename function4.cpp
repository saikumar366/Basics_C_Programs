#include<stdio.h>
int add(int,int);//declaration
int sub(int,int);
int main()
{
	int i,j;
	printf("Enter Number1 ");
	scanf("%d",&i);
	printf("Enter Number2 ");
	scanf("%d",&j);
	int k=add(i,j);//calling
	int a=sub(i,j);
	printf("Addition is %i",k);
	printf("Subtraction is %i",a);
	
}
int add(int x,int y)
{
	int z=x+y;
	return z;
}
int sub(int x,int y)
{
	int z=x-y;
	return z;
}

