#include<stdio.h>
int main()
{
	int choice;
	char ch;
	do
	{
		printf("\n1.India\n2.Australia\n3.Srilanka\n4.Japan");
		printf("Enter Number of the country to see capital ");
		scanf("%i",&choice);
		switch(choice)
		{
			case 1: printf("Capital of India is Delhi! ");
					break;
			case 2: printf("Capital of Australia is Canbera! ");
					break;
			case 3: printf("Capital of Srilanka is Colombo! ");
					break;
			case 4: printf("Capital of Japan is Tokyo! ");
					break;
			default :printf("Wrong choice");
		}
		fflush(stdin);
	printf("\nDo you want to continue ...");
	scanf("%c",&ch);
	}while (ch=='y');
	
}
