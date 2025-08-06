//ask user to enter the value and search value in you array, if the value is found
//then print "FOUND" else print "NOT FOUND"
#include<stdio.h>
int main()
{
	int num;
	int arr[]={23,45,67,89,90};
	printf("Enter Your Number ");
	scanf("%i",&num);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
		printf("FOUND");
		break;
		}
		else
		{
			printf("NOT FOUND");
			break;
		}
	}
}
