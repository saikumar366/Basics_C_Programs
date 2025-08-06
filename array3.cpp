#include<stdio.h>
//create int array to store any 5 values and print number of even values
int main()
{
	int val[]={12,23,34,45,49};
	int num=0;
	for(int i=0;i<5;i++)
	{
		if(val[i]%2==0)
		{
			num++;
		}
	}
	printf("Number of even values are %i ",num);
}

