#include <stdio.h>
#include <string.h>
#include <stdlib.h> //para usar a funçao srand
#include <time.h>
typedef struct{
    int valor;
    int naipe;
}baralho;

int main(){
    int i,j;
    baralho carta[6];
    srand(time(NULL));
    printf("Cartas do primeiro jogador:\n");
    for(i=0;i<6;i++){
        carta[i].valor = rand() % 13;
        carta[i].naipe = rand() % 4;
        while(carta[i].valor ==0){
            carta[i].valor = rand() % 13;
        }
        while(carta[i].naipe == 0){
            carta[i].naipe = rand() % 4;
        }     
    }
    for(i=0,j=1;i<3;i++,j++){
        printf("Carta %i:",j);
        if(carta[i].valor==1){
            printf("AS ");
        }
        if(carta[i].valor==11){
            printf("Valete ");
        }
        if(carta[i].valor==12){
            printf("Rainha ");
        }
        if(carta[i].valor==13){
            printf("Rei ");
        }
        if(carta[i].valor>1&&carta[i].valor<11){
            printf("%i ",carta[i].valor);
        }
        if(carta[i].naipe==1){
            printf("Ouros\n");
        }
        if(carta[i].naipe==2){
            printf("Espadas\n");
        }
        if(carta[i].naipe==3){
            printf("Copas\n");
        }
        if(carta[i].naipe==4){
            printf("Paus\n");
        }
    }
    printf("Cartas do segundo jogador:\n");
    for(i=3,j=1;i<6;i++,j++){
        printf("Carta %i:",j);
        if(carta[i].valor==1){
            printf("AS ");
        }
        if(carta[i].valor==11){
            printf("Valete ");
        }
        if(carta[i].valor==12){
            printf("Rainha ");
        }
        if(carta[i].valor==13){
            printf("Rei ");
        }
        if(carta[i].valor>1&&carta[i].valor<11){
            printf("%i ",carta[i].valor);
        }
        if(carta[i].naipe==1){
            printf("Ouros\n");
        }
        if(carta[i].naipe==2){
            printf("Espadas\n");
        }
        if(carta[i].naipe==3){
            printf("Copas\n");
        }
        if(carta[i].naipe==4){
            printf("Paus\n");
        }
    }return 0; 
}
