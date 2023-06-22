#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *string;
    int tamanho,i,j;
    printf("-- Insira o tamanho da string --\n");
    scanf("%d",&tamanho);
    string = (char *) calloc(tamanho,sizeof(int));

    if(string){
        printf("Sucesso alocacao de memoria\n");
    }else{
        printf("Erro na alocacao de memoria.\n");
    }

    printf("Insira a string: ");
    setbuf(stdin,NULL);
    fgets(string,sizeof(string),stdin);
    for (i = 0,j=0; i < tamanho; i++)
    {
        if(string[i] != 'a' &&  string[i] != 'e' &&  string[i] != 'i' &&  string[i] != 'o' && string[i] != 'u' && string[i] != 'A' &&  string[i] != 'E' &&  string[i] != 'I' &&  string[i] != 'O' && string[i] != 'U'){
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';

    printf("-- [%s] --\n",string);
    free(string);
    
    return 0;
}