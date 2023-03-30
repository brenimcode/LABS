#include <stdio.h>
#include <math.h>

int main()
{
    /* Pretende-se criar um programa que, lidos pelo 
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo 
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 
horas.*/

float hchegada,mchegada,hpartida,mpartida;
int preco;
printf("Digite a hora de chegada,em pares de inteiros, horas minutos:\n");
scanf("%f%f",&hchegada,&mchegada);
printf("Digite a hora de partida: \n");
scanf("%f%f",&hpartida,&mpartida);
float dif=hpartida - hchegada;
// admite-se intervalos de 0 min a 120min
if (dif >=5)
{
    preco = ceil(dif*2);
    printf("A tarifa a ser paga eh: %i",preco);
}
if (dif > 0 && dif <=2)
{
    preco = ceil(dif);
    printf("A tarifa a ser paga eh: %i",preco);
}
else {
    preco = ceil(dif*1.4); 
    printf("A tarifa a ser paga eh: %i",preco);
}
    return 0;
}
