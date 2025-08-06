#include<stdio.h>
 int main(){
FILE *fp;
char text[300];
fp=fopen("myfile2.txt","r");
printf("%s",fgets(text,2,fp));
fclose(fp);
return 0;
}
