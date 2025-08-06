#include<stdio.h>
void main(int argc, char* argv[])
{
int i;
printf("Total number of arguments: %d",argc);
for(i=0;i< argc;i++)
{
printf("\n %d argument: %s",i,argv[i]);
}
}

/*
C:/TC/BIN>TCC mycmd.c
C:/TC/BIN>mycmd 10 20
Number of Arguments: 3
*/
