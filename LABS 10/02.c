#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
   f = fopen("arq.txt","w");
   if(f == NULL){
        printf("Erro na abertura.\n");
        exit(1);
   }
   fprintf(f ,"Olá mundo.");
   fclose(f);
   system("pause");
   
    return 0;
}