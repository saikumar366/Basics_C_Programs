#include<stdio.h>
void main()
{
FILE *fp;
char c[80];
fp=fopen("file.txt","w");
while((c=("hello")!=EOF))
{
fputc("\n%c",c);
}
fclose(fp);
}
