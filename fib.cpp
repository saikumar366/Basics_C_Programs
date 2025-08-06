#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,count;
	printf("Enter the number to generate fibonacci series ");
	scanf("%i",&count);
	printf("%i  %i ",n1,n2);
	for(int i=1;i<=count;i++)
	{
		n3=n1+n2;
		printf("%i ",n3);
		n1=n2;
		n2=n3;
	}
}
