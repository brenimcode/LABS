#include <stdio.h>
#include <stdlib.h>

void escrita(char *nome){
    FILE *fp;
    char texto[500];
    fp = fopen(nome,"w");
    if(fp == NULL){
        printf("\n\tErro ao abrir\n");
        exit(1);
    }
    printf("Insira o texto:\n");
    fgets(texto,500,stdin);
    fprintf(fp,"%s",texto);
    fclose(fp);
}

void leitura(char *nome,char letra,int *q){
    FILE *fp = fopen(nome,"r");
    *q = 0;
    if (fp == NULL)
    {
        printf("\n\tErro ao abrir\n");
        exit(1);
    }
    while (!feof(fp))
    {
        if(letra == fgetc(fp))
            *q = (*q) + 1;
    }
    fclose(fp);
}

int main(){
    char nome[] = {"ex05.txt"};
    char caractere;
    int q;
    escrita(nome);
    printf("Insira o caractere:\n");
    scanf("%c",&caractere);
    leitura(nome,caractere,&q);
    printf("\n\tQuantidade de vezes que [%c] apareceu:\n\t\t\t(%d)\n",caractere,q);
    return 0;
}