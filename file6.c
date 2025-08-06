#include<stdio.h>
void main(){
FILE *fp;
fp=fopen("myfile2.txt","w");
fputs("hello c programming",fp);//it will write entire line into myfile2.txt
fclose(fp);
}
