#include<stdio.h>

int main () {
   FILE *new;
   int character;

   new = fopen("file.txt", "w+");
   for( character = 19 ; character <= 100; character++ ) {
      fputc(character, new);
   }
   fclose(new);

   return(0);
}
