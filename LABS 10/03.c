#include <stdio.h> //entrada e saida de dados em C
#include <stdlib.h> //Fopen
#include <string.h>

void escrever(char *f){
    FILE *file = fopen(f, "w");
    char texto[500];
    if(file == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    printf("\n-- Digite um texto e pressione 1 caractere apenas ao fim --\n");
    fgets(texto,500,stdin); //vai ler 500 caracteres, até que seja pressionado enter
    while(strlen(texto) > 2 ){
        fputs(texto, file);
        fgets(texto,500,stdin); //vai ler 500 caracteres, até que seja pressionado enter
    }
    fclose(file);
}

int ler(char *f){
    FILE *file = fopen(f,"r");
    char letra;
    int vogais = 0;
    if(file == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }
    while(!feof(file)) {
        letra = fgetc(file);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
                vogais++;
        }
    }
    fclose(file);
    return vogais;
}
int main(){
    char nome[] = {"nome.txt"};
    escrever(nome);
    printf("\tQuantidade de vogais: [ %d ]\n",ler(nome));
    system("pause");
    return 0;
}