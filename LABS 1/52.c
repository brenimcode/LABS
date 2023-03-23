#include <stdio.h>

int main()
{
    /* Três amigos jogaram na loteria.O prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta.
Ler quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido. 52 */

    printf("Digite o valor que os 3 amigos investiram, separados em ordem, e o premio: \n");
    float a;
    float b; 
    float c;
    float premio;
    scanf("%f%f%f%f",&a,&b,&c,&premio);
    float soma = (a+b+c);
    float valor_a = (a/soma)*premio;
    float valor_b = (b/soma)*premio; 
    float valor_c = (c/soma)*premio; 
    printf("O investidor A recebe:%f\nO investidor B recebe:%f\nO investidor C recebe:%f\n",valor_a, valor_b,valor_c);

    return 0;
}