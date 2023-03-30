#include <stdio.h>
#include <math.h>

int main()
{
    /* O custo ao consumidor de um carro novo é a soma do 
de fábrica, da comissão do distribuidor, e dos
impostos. A comissão e os impostos são 
calculados sobre o custo de fábrica */
printf("Digite o custo de fabrica \n");
float fabrica,comissao,impostos,final;
scanf("%f",&fabrica);
if (fabrica <=12000)
{
    comissao = fabrica*0.05;
    final = fabrica + comissao;
    printf("O custo final eh %.2f",final);
}
else if(fabrica>12000 && fabrica<=25000)
{
    comissao = fabrica*0.1;
    impostos = 0.15*fabrica;
    final = fabrica + comissao + impostos;
    printf("O custo final eh %.2f",final);
}
else if (fabrica > 25000)
{
    comissao = fabrica*0.15;
    impostos = fabrica*0.2;
    final = fabrica + comissao + impostos;
    printf("O custo final eh %.2f",final);
}
else {
    printf("Insira um valor valido!\n");
}

    return 0;
}
