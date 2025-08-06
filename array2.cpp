#include<stdio.h>
int main()
{
	int age[]={12,23,34,45,58};
	int len=sizeof(age)/sizeof(age[0]);
	for(int i=0;i<len;i++)
	{
		printf("\n %i ",age[i]);
	}
}
