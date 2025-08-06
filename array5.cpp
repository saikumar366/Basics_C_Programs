//ask user to enter the character and check is that character is in your name, if it in your name
//then print FOUND else print NOT FOUND
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	char ch;
	printf("Enter Name ");
	scanf("%s",name);
	fflush(stdin);
	printf("Enter a Character ");
	scanf("%c",&ch);
//	printf("Lenght of name %i",strlen(name));
	for(int i=0;i<6;i++)
	{
		if(name[i]!=ch)
		{
			printf("NOT FOUND");
			break;
		}
		else
		{
			printf("FOUND");
		}
	}
}
