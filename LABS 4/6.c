#include <stdio.h>
int conversao(int horas,int minutos,int segundos){
    if (horas < 0 || minutos < 0 || segundos < 0){ return printf("Erro");}
    horas = horas*3600;
    minutos = minutos*60;
    return printf("\nHoras em segundos: %i\nMinutos em segundos: %i\nSegundos em segundos: %i\n",horas,minutos,segundos);
}

int main(){
    int h,m,s;
    printf("Digite as horas: ");
    scanf("%i",&h);
    printf("Digite os minutos: ");
    scanf("%i",&m);
    printf("Digite os segundos: ");
    scanf("%i",&s);
    conversao(h,m,s);
    return 0;
}