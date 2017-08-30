#include <stdio.h>

int main(int argc, char *argv[]) {
   printf("Número de argumentos: %d\n", argc);
   printf("Argumentos:\n");

   int i = 0;
   for(i = 0; i < argc; i++){
       printf("%s\n",argv[i]);
   }

   return 0;
}
