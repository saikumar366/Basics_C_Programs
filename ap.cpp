#include<stdio.h>
int sum(int arr[]);
int main()
{
	int a[]={1,2,3,4,5};
	int add=sum(a);
	printf("Addition is %i",add);
}
int sum(int arr[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
