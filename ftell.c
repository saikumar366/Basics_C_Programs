//The ftell() function returns the current file position of the specified stream. We can use ftell() function to get the total size of a file after moving file pointer at the end of file. #include <stdio.h>  
#include <conio.h>  
void main (){  
   FILE *fp;  
   int length;  
   clrscr();  
   fp = fopen("file.txt", "r");  
   fseek(fp, 0, SEEK_END);  
  
   length = ftell(fp);  
  
   fclose(fp);  
   printf("Size of file: %d bytes", length);  
   getch();  
}  