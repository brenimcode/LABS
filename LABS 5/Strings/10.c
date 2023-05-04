#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[20];
    float valor;
    setbuf(stdin,NULL);
    gets(nome);
    scanf("%f",&valor);
    float desconto = valor*0.10;
    float avista = valor*0.90;
    printf("%s:\nValor total:%.2f\nValor desconto:%.2f\nValor a vista:%.2f\n",nome,valor,desconto,avista);
    return 0;
}
