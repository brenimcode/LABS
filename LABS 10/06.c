#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    int alfabeto[26];
    int i;
    char letra;
    for (i = 0; i < 26; i++)alfabeto[i]=0;
    char texto[100];
    // Abrindo arquivo para escrita
    fp = fopen("ex06.txt","w");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    //Ler do teclado, um texto e depois inseri-lo por fprintf no arquivo
    fgets(texto,100,stdin);
    fprintf(fp,"%s",texto);
    fclose(fp);
    //Abrindo arquivo para leitura
    fp = fopen("ex06.txt","r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    while(!feof(fp)){
        letra = fgetc(fp);
        if(letra == 'a' || letra == 'A' )
            alfabeto[0]++;
        else if(letra == 'b' || letra == 'B')
            alfabeto[1]++;
        else if(letra == 'c' || letra == 'C')
            alfabeto[2]++;
        else if(letra == 'd' || letra == 'D')
            alfabeto[3]++;
        else if(letra == 'e' || letra == 'E')
            alfabeto[4]++;
        else if(letra == 'f' || letra == 'F')
            alfabeto[5]++;
        else if(letra == 'g' || letra == 'G')
            alfabeto[6]++;
        else if(letra == 'h' || letra == 'H')
            alfabeto[7]++;
        else if(letra == 'i' || letra == 'I')
            alfabeto[8]++;
        else if(letra == 'j' || letra == 'J')
            alfabeto[9]++;
        else if(letra == 'k' || letra == 'K')
            alfabeto[10]++;
        else if(letra == 'l' || letra == 'L')
            alfabeto[11]++;
        else if(letra == 'm' || letra == 'M')
            alfabeto[12]++;
        else if(letra == 'n' || letra == 'N')
            alfabeto[13]++;
        else if(letra == 'o' || letra == 'O')
            alfabeto[14]++;
        else if(letra == 'p' || letra == 'P')
            alfabeto[15]++;
        else if(letra == 'q' || letra == 'Q')
            alfabeto[16]++;
        else if(letra == 'r' || letra == 'R')
            alfabeto[17]++;
        else if(letra == 's' || letra == 'S')
            alfabeto[18]++;
        else if(letra == 't' || letra == 'T')
            alfabeto[19]++;
        else if(letra == 'u' || letra == 'U')
            alfabeto[20]++;
        else if(letra == 'v' || letra == 'V')
            alfabeto[21]++;
        else if(letra == 'w' || letra == 'W')
            alfabeto[22]++;
        else if(letra == 'x' || letra == 'X')
            alfabeto[23]++;
        else if(letra == 'y' || letra == 'Y')
            alfabeto[24]++;
        else if(letra == 'z' || letra == 'Z')
            alfabeto[25]++;
    }
    for (i = 0; i < 26; i++)
    {
        printf("\n%c: [%d]",'A'+i,alfabeto[i]);
    }
    
    fclose(fp);

    return 0;
}