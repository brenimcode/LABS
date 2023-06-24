#include <stdio.h> //Biblioteca para entrada e saída de dados
#include <stdlib.h> //Biblioteca para função exit e pause

int main(){

    char c;
    FILE *file;

    file = fopen("arq.txt", "w");
    if(file == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(0);
    }
        while(c != '0'){
            printf("Digite o caractere: ");
            scanf("%c", &c);
            fprintf(file, "%c", c);
    }
    fclose(file);
    file = fopen("arq.txt", "r");

    if(file == NULL){
        printf("Erro ao abrir o arquivo\n");
        system("pause");
        exit(0);
    }

    do
{
    //faz a leitura do caracter no arquivo apontado por pont_arq
    c = fgetc(file);
    
    //exibe o caracter lido na tela
    printf("%c" , c);    
    
}while (c != EOF);

    fclose(file);
    return 0;
}